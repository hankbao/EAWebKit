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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEDiffuseLightingElement.h"

#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDiffuseLightingElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEDiffuseLightingElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementIn1), (intptr_t)0 },
    { "surfaceScale", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementSurfaceScale), (intptr_t)0 },
    { "diffuseConstant", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementDiffuseConstant), (intptr_t)0 },
    { "kernelUnitLengthX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementKernelUnitLengthX), (intptr_t)0 },
    { "kernelUnitLengthY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementKernelUnitLengthY), (intptr_t)0 },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementX), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementY), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementWidth), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementHeight), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementResult), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDiffuseLightingElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDiffuseLightingElementTable = { 34, 31, JSSVGFEDiffuseLightingElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEDiffuseLightingElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDiffuseLightingElementConstructorTable = { 1, 0, JSSVGFEDiffuseLightingElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEDiffuseLightingElementConstructor::s_info = { "SVGFEDiffuseLightingElementConstructor", &Base::s_info, &JSSVGFEDiffuseLightingElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEDiffuseLightingElementConstructor) };

JSSVGFEDiffuseLightingElementConstructor::JSSVGFEDiffuseLightingElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEDiffuseLightingElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEDiffuseLightingElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEDiffuseLightingElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElementConstructor, JSDOMWrapper>(exec, JSSVGFEDiffuseLightingElementConstructorTable, jsCast<JSSVGFEDiffuseLightingElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDiffuseLightingElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDiffuseLightingElementPrototypeTable = { 1, 0, JSSVGFEDiffuseLightingElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDiffuseLightingElementPrototype::s_info = { "SVGFEDiffuseLightingElementPrototype", &Base::s_info, &JSSVGFEDiffuseLightingElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEDiffuseLightingElementPrototype) };

JSObject* JSSVGFEDiffuseLightingElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDiffuseLightingElement>(vm, globalObject);
}

const ClassInfo JSSVGFEDiffuseLightingElement::s_info = { "SVGFEDiffuseLightingElement", &Base::s_info, &JSSVGFEDiffuseLightingElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEDiffuseLightingElement) };

JSSVGFEDiffuseLightingElement::JSSVGFEDiffuseLightingElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEDiffuseLightingElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEDiffuseLightingElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFEDiffuseLightingElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEDiffuseLightingElementPrototype::create(vm, globalObject, JSSVGFEDiffuseLightingElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEDiffuseLightingElement* thisObject = jsCast<JSSVGFEDiffuseLightingElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFEDiffuseLightingElement, Base>(exec, JSSVGFEDiffuseLightingElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGFEDiffuseLightingElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDiffuseLightingElementSurfaceScale(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.surfaceScaleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDiffuseLightingElementDiffuseConstant(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.diffuseConstantAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.kernelUnitLengthXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.kernelUnitLengthYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEDiffuseLightingElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDiffuseLightingElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDiffuseLightingElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDiffuseLightingElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDiffuseLightingElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* castedThis = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDiffuseLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEDiffuseLightingElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDiffuseLightingElement* domObject = jsCast<JSSVGFEDiffuseLightingElement*>(asObject(slotBase));
    return JSSVGFEDiffuseLightingElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGFEDiffuseLightingElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDiffuseLightingElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)