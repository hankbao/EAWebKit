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
#include "JSWebKitNamedFlow.h"

#include "Element.h"
#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSNode.h"
#include "JSNodeCustom.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include "URL.h"
#include "WebKitNamedFlow.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitNamedFlowTableValues[] =
{
    { "name", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitNamedFlowName), (intptr_t)0 },
    { "overset", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitNamedFlowOverset), (intptr_t)0 },
    { "firstEmptyRegionIndex", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitNamedFlowFirstEmptyRegionIndex), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitNamedFlowTable = { 8, 7, JSWebKitNamedFlowTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSWebKitNamedFlowPrototypeTableValues[] =
{
    { "getRegionsByContent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionGetRegionsByContent), (intptr_t)1 },
    { "getRegions", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionGetRegions), (intptr_t)0 },
    { "getContent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionGetContent), (intptr_t)0 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitNamedFlowPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitNamedFlowPrototypeTable = { 16, 15, JSWebKitNamedFlowPrototypeTableValues, 0 };
const ClassInfo JSWebKitNamedFlowPrototype::s_info = { "WebKitNamedFlowPrototype", &Base::s_info, &JSWebKitNamedFlowPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitNamedFlowPrototype) };

JSObject* JSWebKitNamedFlowPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitNamedFlow>(vm, globalObject);
}

bool JSWebKitNamedFlowPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitNamedFlowPrototype* thisObject = jsCast<JSWebKitNamedFlowPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSWebKitNamedFlowPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSWebKitNamedFlow::s_info = { "WebKitNamedFlow", &Base::s_info, &JSWebKitNamedFlowTable, 0 , CREATE_METHOD_TABLE(JSWebKitNamedFlow) };

JSWebKitNamedFlow::JSWebKitNamedFlow(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitNamedFlow> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebKitNamedFlow::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebKitNamedFlow::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitNamedFlowPrototype::create(vm, globalObject, JSWebKitNamedFlowPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWebKitNamedFlow::destroy(JSC::JSCell* cell)
{
    JSWebKitNamedFlow* thisObject = static_cast<JSWebKitNamedFlow*>(cell);
    thisObject->JSWebKitNamedFlow::~JSWebKitNamedFlow();
}

JSWebKitNamedFlow::~JSWebKitNamedFlow()
{
    releaseImplIfNotNull();
}

bool JSWebKitNamedFlow::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitNamedFlow* thisObject = jsCast<JSWebKitNamedFlow*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWebKitNamedFlow, Base>(exec, JSWebKitNamedFlowTable, thisObject, propertyName, slot);
}

JSValue jsWebKitNamedFlowName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitNamedFlow& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return result;
}


JSValue jsWebKitNamedFlowOverset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitNamedFlow& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.overset());
    return result;
}


JSValue jsWebKitNamedFlowFirstEmptyRegionIndex(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitNamedFlow& impl = castedThis->impl();
    JSValue result = jsNumber(impl.firstEmptyRegionIndex());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetRegionsByContent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    Node* contentNode(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getRegionsByContent(contentNode)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetRegions(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getRegions()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetContent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getContent()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitNamedFlow::info()))
        return throwVMTypeError(exec);
    JSWebKitNamedFlow* castedThis = jsCast<JSWebKitNamedFlow*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitNamedFlow::info());
    WebKitNamedFlow& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSWebKitNamedFlow::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSWebKitNamedFlow* thisObject = jsCast<JSWebKitNamedFlow*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

static inline bool isObservable(JSWebKitNamedFlow* jsWebKitNamedFlow)
{
    if (jsWebKitNamedFlow->hasCustomProperties())
        return true;
    if (jsWebKitNamedFlow->impl().hasEventListeners())
        return true;
    return false;
}

bool JSWebKitNamedFlowOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebKitNamedFlow* jsWebKitNamedFlow = jsCast<JSWebKitNamedFlow*>(handle.get().asCell());
    if (jsWebKitNamedFlow->impl().isFiringEventListeners())
        return true;
    if (!isObservable(jsWebKitNamedFlow))
        return false;
    void* root = WebCore::root(jsWebKitNamedFlow->impl().ownerNode());
    return visitor.containsOpaqueRoot(root);
}

void JSWebKitNamedFlowOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebKitNamedFlow* jsWebKitNamedFlow = jsCast<JSWebKitNamedFlow*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebKitNamedFlow->impl(), jsWebKitNamedFlow);
    jsWebKitNamedFlow->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebKitNamedFlow@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15WebKitNamedFlowE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebKitNamedFlow* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebKitNamedFlow>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebKitNamedFlow@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15WebKitNamedFlowE[2];
#if COMPILER(CLANG)
    // If this fails WebKitNamedFlow does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebKitNamedFlow), WebKitNamedFlow_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebKitNamedFlow has subclasses. If WebKitNamedFlow has subclasses that get passed
    // to toJS() we currently require WebKitNamedFlow you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebKitNamedFlow>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebKitNamedFlow>(exec, globalObject, impl);
}

WebKitNamedFlow* toWebKitNamedFlow(JSC::JSValue value)
{
    return value.inherits(JSWebKitNamedFlow::info()) ? &jsCast<JSWebKitNamedFlow*>(asObject(value))->impl() : 0;
}

}