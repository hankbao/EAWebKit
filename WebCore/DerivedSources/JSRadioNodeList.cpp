/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSRadioNodeList.h"

#include "JSNode.h"
#include "Node.h"
#include "RadioNodeList.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRadioNodeListTableValues[] =
{
    { "value", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRadioNodeListValue), (intptr_t)setJSRadioNodeListValue },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRadioNodeListTable = { 2, 1, JSRadioNodeListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSRadioNodeListPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRadioNodeListPrototypeTable = { 1, 0, JSRadioNodeListPrototypeTableValues, 0 };
const ClassInfo JSRadioNodeListPrototype::s_info = { "RadioNodeListPrototype", &Base::s_info, &JSRadioNodeListPrototypeTable, 0, CREATE_METHOD_TABLE(JSRadioNodeListPrototype) };

JSObject* JSRadioNodeListPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRadioNodeList>(vm, globalObject);
}

const ClassInfo JSRadioNodeList::s_info = { "RadioNodeList", &Base::s_info, &JSRadioNodeListTable, 0 , CREATE_METHOD_TABLE(JSRadioNodeList) };

JSRadioNodeList::JSRadioNodeList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RadioNodeList> impl)
    : JSNodeList(structure, globalObject, impl)
{
}

void JSRadioNodeList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSRadioNodeList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRadioNodeListPrototype::create(vm, globalObject, JSRadioNodeListPrototype::createStructure(vm, globalObject, JSNodeListPrototype::self(vm, globalObject)));
}

bool JSRadioNodeList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSRadioNodeList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSRadioNodeList, Base>(exec, JSRadioNodeListTable, thisObject, propertyName, slot);
}

bool JSRadioNodeList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsRadioNodeListValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRadioNodeList* castedThis = jsCast<JSRadioNodeList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RadioNodeList& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.value());
    return result;
}


void JSRadioNodeList::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSRadioNodeList, Base>(exec, propertyName, value, JSRadioNodeListTable, thisObject, slot);
}

void setJSRadioNodeListValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSRadioNodeList* castedThis = jsCast<JSRadioNodeList*>(thisObject);
    RadioNodeList& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setValue(nativeValue);
}


void JSRadioNodeList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSRadioNodeList* thisObject = jsCast<JSRadioNodeList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}


JSValue JSRadioNodeList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSRadioNodeList* thisObj = jsCast<JSRadioNodeList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, info());
    return toJS(exec, thisObj->globalObject(), thisObj->impl().item(index));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7RadioNodeList@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore13RadioNodeListE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, RadioNodeList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRadioNodeList>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7RadioNodeList@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore13RadioNodeListE[2];
#if COMPILER(CLANG)
    // If this fails RadioNodeList does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(RadioNodeList), RadioNodeList_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // RadioNodeList has subclasses. If RadioNodeList has subclasses that get passed
    // to toJS() we currently require RadioNodeList you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<RadioNodeList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSRadioNodeList>(exec, globalObject, impl);
}


}