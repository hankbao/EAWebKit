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

#if ENABLE(SVG)

#include "JSSVGZoomEvent.h"

#include "JSSVGPoint.h"
#include "JSSVGRect.h"
#include "SVGPoint.h"
#include "SVGRect.h"
#include "SVGZoomEvent.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGZoomEventTableValues[] =
{
    { "zoomRectScreen", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventZoomRectScreen), (intptr_t)0 },
    { "previousScale", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventPreviousScale), (intptr_t)0 },
    { "previousTranslate", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventPreviousTranslate), (intptr_t)0 },
    { "newScale", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventNewScale), (intptr_t)0 },
    { "newTranslate", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventNewTranslate), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGZoomEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGZoomEventTable = { 17, 15, JSSVGZoomEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGZoomEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGZoomEventConstructorTable = { 1, 0, JSSVGZoomEventConstructorTableValues, 0 };
const ClassInfo JSSVGZoomEventConstructor::s_info = { "SVGZoomEventConstructor", &Base::s_info, &JSSVGZoomEventConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGZoomEventConstructor) };

JSSVGZoomEventConstructor::JSSVGZoomEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGZoomEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGZoomEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGZoomEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGZoomEventConstructor, JSDOMWrapper>(exec, JSSVGZoomEventConstructorTable, jsCast<JSSVGZoomEventConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGZoomEventPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGZoomEventPrototypeTable = { 1, 0, JSSVGZoomEventPrototypeTableValues, 0 };
const ClassInfo JSSVGZoomEventPrototype::s_info = { "SVGZoomEventPrototype", &Base::s_info, &JSSVGZoomEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGZoomEventPrototype) };

JSObject* JSSVGZoomEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGZoomEvent>(vm, globalObject);
}

const ClassInfo JSSVGZoomEvent::s_info = { "SVGZoomEvent", &Base::s_info, &JSSVGZoomEventTable, 0 , CREATE_METHOD_TABLE(JSSVGZoomEvent) };

JSSVGZoomEvent::JSSVGZoomEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGZoomEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
}

void JSSVGZoomEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGZoomEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGZoomEventPrototype::create(vm, globalObject, JSSVGZoomEventPrototype::createStructure(vm, globalObject, JSUIEventPrototype::self(vm, globalObject)));
}

bool JSSVGZoomEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGZoomEvent* thisObject = jsCast<JSSVGZoomEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGZoomEvent, Base>(exec, JSSVGZoomEventTable, thisObject, propertyName, slot);
}

JSValue jsSVGZoomEventZoomRectScreen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* castedThis = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(impl.zoomRectScreen())));
    return result;
}


JSValue jsSVGZoomEventPreviousScale(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* castedThis = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.previousScale());
    return result;
}


JSValue jsSVGZoomEventPreviousTranslate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* castedThis = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGPoint>::create(impl.previousTranslate())));
    return result;
}


JSValue jsSVGZoomEventNewScale(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* castedThis = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.newScale());
    return result;
}


JSValue jsSVGZoomEventNewTranslate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* castedThis = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGZoomEvent& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<SVGPoint>::create(impl.newTranslate())));
    return result;
}


JSValue jsSVGZoomEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGZoomEvent* domObject = jsCast<JSSVGZoomEvent*>(asObject(slotBase));
    return JSSVGZoomEvent::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGZoomEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGZoomEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)