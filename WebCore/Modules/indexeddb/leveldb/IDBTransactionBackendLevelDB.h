/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef IDBTransactionBackendLevelDB_h
#define IDBTransactionBackendLevelDB_h

#if ENABLE(INDEXED_DATABASE) && USE(LEVELDB)

#include "IDBBackingStoreLevelDB.h"
#include "IDBDatabaseBackendInterface.h"
#include "IDBDatabaseBackendLevelDB.h"
#include "IDBDatabaseError.h"
#include "Timer.h"
#include <wtf/Deque.h>
#include <wtf/HashSet.h>
#include <wtf/RefPtr.h>

namespace WebCore {

class IDBCursorBackendLevelDB;
class IDBDatabaseCallbacks;

class IDBTransactionBackendLevelDB : public RefCounted<IDBTransactionBackendLevelDB> {
public:
    static PassRefPtr<IDBTransactionBackendLevelDB> create(int64_t transactionId, PassRefPtr<IDBDatabaseCallbacks>, const Vector<int64_t>&, IndexedDB::TransactionMode, IDBDatabaseBackendLevelDB*);
    virtual ~IDBTransactionBackendLevelDB();

    virtual void abort();
    void commit();

    class Operation {
    public:
        virtual ~Operation() { }
        virtual void perform(IDBTransactionBackendLevelDB*) = 0;
    };

    void abort(PassRefPtr<IDBDatabaseError>);
    void run();
    IndexedDB::TransactionMode mode() const { return m_mode; }
    const HashSet<int64_t>& scope() const { return m_objectStoreIds; }
    void scheduleTask(PassOwnPtr<Operation> task, PassOwnPtr<Operation> abortTask = nullptr) { scheduleTask(IDBDatabaseBackendInterface::NormalTask, task, abortTask); }
    void scheduleTask(IDBDatabaseBackendInterface::TaskType, PassOwnPtr<Operation>, PassOwnPtr<Operation> abortTask = nullptr);
    void registerOpenCursor(IDBCursorBackendLevelDB*);
    void unregisterOpenCursor(IDBCursorBackendLevelDB*);
    void addPreemptiveEvent() { m_pendingPreemptiveEvents++; }
    void didCompletePreemptiveEvent() { m_pendingPreemptiveEvents--; ASSERT(m_pendingPreemptiveEvents >= 0); }
    IDBBackingStore::Transaction* backingStoreTransaction() { return &m_transaction; }
    int64_t id() const { return m_id; }

    IDBDatabaseBackendLevelDB* database() const { return m_database.get(); }

private:
    IDBTransactionBackendLevelDB(int64_t id, PassRefPtr<IDBDatabaseCallbacks>, const HashSet<int64_t>& objectStoreIds, IndexedDB::TransactionMode, IDBDatabaseBackendLevelDB*);

    enum State {
        Unused, // Created, but no tasks yet.
        StartPending, // Enqueued tasks, but backing store transaction not yet started.
        Running, // Backing store transaction started but not yet finished.
        Finished, // Either aborted or committed.
    };

    void start();

    bool isTaskQueueEmpty() const;
    bool hasPendingTasks() const;

    void taskTimerFired(Timer<IDBTransactionBackendLevelDB>*);
    void closeOpenCursors();

    const int64_t m_id;
    const HashSet<int64_t> m_objectStoreIds;
    const IndexedDB::TransactionMode m_mode;

    State m_state;
    bool m_commitPending;
    RefPtr<IDBDatabaseCallbacks> m_callbacks;
    RefPtr<IDBDatabaseBackendLevelDB> m_database;

    typedef Deque<OwnPtr<Operation> > TaskQueue;
    TaskQueue m_taskQueue;
    TaskQueue m_preemptiveTaskQueue;
    TaskQueue m_abortTaskQueue;

    IDBBackingStore::Transaction m_transaction;

    // FIXME: delete the timer once we have threads instead.
    Timer<IDBTransactionBackendLevelDB> m_taskTimer;
    int m_pendingPreemptiveEvents;

    HashSet<IDBCursorBackendLevelDB*> m_openCursors;
};

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE) && USE(LEVELDB)

#endif // IDBTransactionBackendLevelDB_h