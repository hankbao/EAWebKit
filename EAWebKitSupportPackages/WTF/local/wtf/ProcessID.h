/*
 * Copyright (C) 2013 Apple Inc. All rights reserved.
 * Copyright (C) 2014 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef ProcessID_h
#define ProcessID_h

#include <wtf/Platform.h>
//+EAWebKitChange
//3/10/2014
#if OS(UNIX) || defined(CS_UNDEFINED_STRING) || defined(EA_PLATFORM_OSX)
//-EAWebKitChange
#include <unistd.h>
#endif

//+EAWebKitChange
//3/11/2014
#if OS(WINDOWS) || defined(EA_PLATFORM_MICROSOFT)
//-EAWebKitChange
#include <windows.h>
#endif

namespace WTF {

inline int getCurrentProcessID()
{
//+EAWebKitChange
//3/11/2014
#if OS(WINDOWS) || defined(EA_PLATFORM_MICROSOFT)
//-EAWebKitChange
    return GetCurrentProcessId();
#else
    return getpid();
#endif
}

} // namespace WTF

using WTF::getCurrentProcessID;

#endif // ProcessID_h

