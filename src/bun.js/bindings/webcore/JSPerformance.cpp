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
#include "JSPerformance.h"

#include "ActiveDOMObject.h"
#include "EventNames.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "IDLTypes.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertBase.h"
#include "JSDOMConvertDictionary.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertNumbers.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMConvertUnion.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
// #include "JSDOMWindowBase.h"
#include "JSDOMWrapperCache.h"
#include "JSEventListener.h"

#include "JSPerformanceEntry.h"
#include "JSPerformanceMark.h"
#include "JSPerformanceMarkOptions.h"
#include "JSPerformanceMeasure.h"
#include "JSPerformanceMeasureOptions.h"
// #include "JSPerformanceNavigation.h"
#include "JSPerformanceTiming.h"

#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
// #include "WebCoreOpaqueRootInlines.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/ObjectConstructor.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <variant>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>

#include <JavaScriptCore/DOMJITAbstractHeap.h>
#include "DOMJITIDLConvert.h"
#include "DOMJITIDLType.h"
#include "DOMJITIDLTypeFilter.h"
#include "DOMJITHelpers.h"

namespace WebCore {
using namespace JSC;

// Functions

// static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_now);

static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_toJSON);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntries);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntriesByType);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntriesByName);

// static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearResourceTimings);
// static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_setResourceTimingBufferSize);

static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_mark);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearMarks);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_measure);
static JSC_DECLARE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearMeasures);

static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceConstructor);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsPerformanceConstructor);
// static JSC_DECLARE_CUSTOM_GETTER(jsPerformance_timeOrigin);

// static JSC_DECLARE_CUSTOM_GETTER(jsPerformance_navigation);
static JSC_DECLARE_CUSTOM_GETTER(jsPerformance_timing);
// static JSC_DECLARE_CUSTOM_GETTER(jsPerformance_onresourcetimingbufferfull);
// static JSC_DECLARE_CUSTOM_SETTER(setJSPerformance_onresourcetimingbufferfull);

// -- copied --

extern "C" {

static JSC_DECLARE_HOST_FUNCTION(functionPerformanceNow);
static JSC_DECLARE_JIT_OPERATION_WITHOUT_WTF_INTERNAL(functionPerformanceNowWithoutTypeCheck, JSC::EncodedJSValue, (JSC::JSGlobalObject*, JSPerformance*));
}

static inline JSC::EncodedJSValue functionPerformanceNowBody(JSGlobalObject* globalObject)
{
    auto* global = reinterpret_cast<GlobalObject*>(globalObject);
    // nanoseconds to seconds
    double time = static_cast<double>(Bun__readOriginTimer(global->bunVM()));
    double result = time / 1000000.0;

    // https://github.com/oven-sh/bun/issues/5604
    return JSValue::encode(jsDoubleNumber(result));
}

JSC_DEFINE_HOST_FUNCTION(functionPerformanceNow, (JSGlobalObject * globalObject, JSC::CallFrame* callFrame))
{
    return functionPerformanceNowBody(globalObject);
}

JSC_DEFINE_JIT_OPERATION(functionPerformanceNowWithoutTypeCheck, JSC::EncodedJSValue, (JSC::JSGlobalObject * lexicalGlobalObject, JSPerformance* castedThis))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    IGNORE_WARNINGS_BEGIN("frame-address")
    CallFrame* callFrame = DECLARE_CALL_FRAME(vm);
    IGNORE_WARNINGS_END
    JSC::JITOperationPrologueCallFrameTracer tracer(vm, callFrame);
    return { functionPerformanceNowBody(lexicalGlobalObject) };
}

// -- end copied --

class JSPerformancePrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSPerformancePrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformancePrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformancePrototype>(vm)) JSPerformancePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformancePrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSPerformancePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSPerformancePrototype, JSPerformancePrototype::Base);

using JSPerformanceDOMConstructor = JSDOMConstructorNotConstructable<JSPerformance>;

template<> const ClassInfo JSPerformanceDOMConstructor::s_info = { "Performance"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformanceDOMConstructor) };

template<> JSValue JSPerformanceDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSEventTarget::getConstructor(vm, &globalObject);
}

template<> void JSPerformanceDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "Performance"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSPerformance::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSPerformancePrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformanceConstructor, 0 } },
    // { "timeOrigin"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformance_timeOrigin, 0 } },
    // { "navigation"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformance_navigation, 0 } },
    { "timing"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformance_timing, 0 } },
    // { "onresourcetimingbufferfull"_s, JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute, NoIntrinsic, { HashTableValue::GetterSetterType, jsPerformance_onresourcetimingbufferfull, setJSPerformance_onresourcetimingbufferfull } },
    // { "now"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_now, 0 } },
    { "toJSON"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_toJSON, 0 } },
    { "getEntries"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_getEntries, 0 } },
    { "getEntriesByType"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_getEntriesByType, 1 } },
    { "getEntriesByName"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_getEntriesByName, 1 } },
    // { "clearResourceTimings"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_clearResourceTimings, 0 } },
    // { "setResourceTimingBufferSize"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_setResourceTimingBufferSize, 1 } },
    { "mark"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_mark, 1 } },
    { "clearMarks"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_clearMarks, 0 } },
    { "measure"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_measure, 1 } },
    { "clearMeasures"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsPerformancePrototypeFunction_clearMeasures, 0 } },
};

const ClassInfo JSPerformancePrototype::s_info = { "Performance"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformancePrototype) };

void JSPerformancePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSPerformance::info(), JSPerformancePrototypeTableValues, *this);
    // bool hasDisabledRuntimeProperties = false;
    // if (!(globalObject())->inherits<JSDOMWindowBase>()) {
    //     hasDisabledRuntimeProperties = true;
    //     auto propertyName = Identifier::fromString(vm, "navigation"_s);
    //     VM::DeletePropertyModeScope scope(vm, VM::DeletePropertyMode::IgnoreConfigurable);
    //     DeletePropertySlot slot;
    //     JSObject::deleteProperty(this, globalObject(), propertyName, slot);
    // }
    // if (!(globalObject())->inherits<JSDOMWindowBase>()) {
    //     hasDisabledRuntimeProperties = true;
    //     auto propertyName = Identifier::fromString(vm, "timing"_s);
    //     VM::DeletePropertyModeScope scope(vm, VM::DeletePropertyMode::IgnoreConfigurable);
    //     DeletePropertySlot slot;
    //     JSObject::deleteProperty(this, globalObject(), propertyName, slot);
    // }
    // if (hasDisabledRuntimeProperties && structure()->isDictionary())
    //     flattenDictionaryObject(vm);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSPerformance::s_info = { "Performance"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSPerformance) };

JSPerformance::JSPerformance(Structure* structure, JSDOMGlobalObject& globalObject, Ref<Performance>&& impl)
    : JSEventTarget(structure, globalObject, WTFMove(impl))
{
}

// static_assert(!std::is_base_of<ActiveDOMObject, Performance>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

void JSPerformance::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    static const JSC::DOMJIT::Signature DOMJITSignatureForPerformanceNow(
        functionPerformanceNowWithoutTypeCheck,
        JSPerformance::info(),
        JSC::DOMJIT::Effect::forWriteKinds(DFG::AbstractHeapKind::SideState),
        SpecDoubleReal);

    JSFunction* now = JSFunction::create(
        vm,
        globalObject(),
        0,
        String("now"_s),
        functionPerformanceNow, ImplementationVisibility::Public, NoIntrinsic, functionPerformanceNow,
        &DOMJITSignatureForPerformanceNow);
    this->putDirect(vm, JSC::Identifier::fromString(vm, "now"_s), now, 0);

    this->putDirect(
        vm,
        JSC::Identifier::fromString(vm, "timeOrigin"_s),
        jsDoubleNumber(Bun__readOriginTimerStart(reinterpret_cast<Zig::GlobalObject*>(this->globalObject())->bunVM())),
        PropertyAttribute::ReadOnly | 0);
}

JSObject* JSPerformance::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSPerformancePrototype::createStructure(vm, &globalObject, JSEventTarget::prototype(vm, globalObject));
    structure->setMayBePrototype(true);
    return JSPerformancePrototype::create(vm, &globalObject, structure);
}

JSObject* JSPerformance::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSPerformance>(vm, globalObject);
}

JSValue JSPerformance::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSPerformanceDOMConstructor, DOMConstructorID::Performance>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformanceConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSPerformancePrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSPerformance::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

// static inline JSValue jsPerformance_timeOriginGetter(JSGlobalObject& lexicalGlobalObject, JSPerformance& thisObject)
// {
//     auto& vm = JSC::getVM(&lexicalGlobalObject);
//     auto throwScope = DECLARE_THROW_SCOPE(vm);
//     auto& impl = thisObject.wrapped();
//     RELEASE_AND_RETURN(throwScope, (toJS<IDLDouble>(lexicalGlobalObject, throwScope, impl.timeOrigin())));
// }

// JSC_DEFINE_CUSTOM_GETTER(jsPerformance_timeOrigin, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
// {
//     return IDLAttribute<JSPerformance>::get<jsPerformance_timeOriginGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
// }

// static inline JSValue jsPerformance_navigationGetter(JSGlobalObject& lexicalGlobalObject, JSPerformance& thisObject)
// {
//     auto& vm = JSC::getVM(&lexicalGlobalObject);
//     auto throwScope = DECLARE_THROW_SCOPE(vm);
//     auto& impl = thisObject.wrapped();
//     RELEASE_AND_RETURN(throwScope, (toJS<IDLInterface<PerformanceNavigation>>(lexicalGlobalObject, *thisObject.globalObject(), throwScope, impl.navigation())));
// }

// JSC_DEFINE_CUSTOM_GETTER(jsPerformance_navigation, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
// {
//     return IDLAttribute<JSPerformance>::get<jsPerformance_navigationGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
// }

static inline JSValue jsPerformance_timingGetter(JSGlobalObject& lexicalGlobalObject, JSPerformance& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLInterface<PerformanceTiming>>(lexicalGlobalObject, *thisObject.globalObject(), throwScope, impl.timing())));
}

JSC_DEFINE_CUSTOM_GETTER(jsPerformance_timing, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSPerformance>::get<jsPerformance_timingGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

// static inline JSValue jsPerformance_onresourcetimingbufferfullGetter(JSGlobalObject& lexicalGlobalObject, JSPerformance& thisObject)
// {
//     UNUSED_PARAM(lexicalGlobalObject);
//     return eventHandlerAttribute(thisObject.wrapped(), eventNames().resourcetimingbufferfullEvent, worldForDOMObject(thisObject));
// }

// JSC_DEFINE_CUSTOM_GETTER(jsPerformance_onresourcetimingbufferfull, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName attributeName))
// {
//     return IDLAttribute<JSPerformance>::get<jsPerformance_onresourcetimingbufferfullGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
// }

// static inline bool setJSPerformance_onresourcetimingbufferfullSetter(JSGlobalObject& lexicalGlobalObject, JSPerformance& thisObject, JSValue value)
// {
//     auto& vm = JSC::getVM(&lexicalGlobalObject);
//     UNUSED_PARAM(vm);
//     setEventHandlerAttribute<JSEventListener>(thisObject.wrapped(), eventNames().resourcetimingbufferfullEvent, value, thisObject);
//     vm.writeBarrier(&thisObject, value);
//     ensureStillAliveHere(value);

//     return true;
// }

// JSC_DEFINE_CUSTOM_SETTER(setJSPerformance_onresourcetimingbufferfull, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, EncodedJSValue encodedValue, PropertyName attributeName))
// {
//     return IDLAttribute<JSPerformance>::set<setJSPerformance_onresourcetimingbufferfullSetter>(*lexicalGlobalObject, thisValue, encodedValue, attributeName);
// }

// static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_nowBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
// {
//     auto& vm = JSC::getVM(lexicalGlobalObject);
//     auto throwScope = DECLARE_THROW_SCOPE(vm);
//     UNUSED_PARAM(throwScope);
//     UNUSED_PARAM(callFrame);
//     auto& impl = castedThis->wrapped();
//     RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.now())));
// }

// JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_now, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
// {
//     return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_nowBody>(*lexicalGlobalObject, *callFrame, "now");
// }

static inline EncodedJSValue jsPerformancePrototypeFunction_toJSONBody(JSGlobalObject* lexicalGlobalObject, CallFrame*, JSPerformance* castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    auto* result = constructEmptyObject(lexicalGlobalObject);
    auto timeOriginValue = toJS<IDLDouble>(*lexicalGlobalObject, throwScope, impl.timeOrigin());
    RETURN_IF_EXCEPTION(throwScope, {});
    result->putDirect(vm, Identifier::fromString(vm, "timeOrigin"_s), timeOriginValue);
    // if ((castedThis->globalObject())->inherits<JSDOMWindowBase>()) {
    //     auto navigationValue = toJS<IDLInterface<PerformanceNavigation>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.navigation());
    //     RETURN_IF_EXCEPTION(throwScope, { });
    //     result->putDirect(vm, Identifier::fromString(vm, "navigation"_s), navigationValue);
    // }
    // if ((castedThis->globalObject())->inherits<JSDOMWindowBase>()) {
    //     auto timingValue = toJS<IDLInterface<PerformanceTiming>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.timing());
    //     RETURN_IF_EXCEPTION(throwScope, { });
    //     result->putDirect(vm, Identifier::fromString(vm, "timing"_s), timingValue);
    // }
    return JSValue::encode(result);
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_toJSON, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_toJSONBody>(*lexicalGlobalObject, *callFrame, "toJSON");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_getEntriesBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntries())));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntries, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_getEntriesBody>(*lexicalGlobalObject, *callFrame, "getEntries");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_getEntriesByTypeBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto type = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntriesByType(WTFMove(type)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntriesByType, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_getEntriesByTypeBody>(*lexicalGlobalObject, *callFrame, "getEntriesByType");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_getEntriesByNameBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto name = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto type = argument1.value().isUndefined() ? String() : convert<IDLDOMString>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLSequence<IDLInterface<PerformanceEntry>>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.getEntriesByName(WTFMove(name), WTFMove(type)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_getEntriesByName, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_getEntriesByNameBody>(*lexicalGlobalObject, *callFrame, "getEntriesByName");
}

// static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_clearResourceTimingsBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
// {
//     auto& vm = JSC::getVM(lexicalGlobalObject);
//     auto throwScope = DECLARE_THROW_SCOPE(vm);
//     UNUSED_PARAM(throwScope);
//     UNUSED_PARAM(callFrame);
//     auto& impl = castedThis->wrapped();
//     RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.clearResourceTimings(); })));
// }

// JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearResourceTimings, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
// {
//     return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_clearResourceTimingsBody>(*lexicalGlobalObject, *callFrame, "clearResourceTimings");
// }

// static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_setResourceTimingBufferSizeBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
// {
//     auto& vm = JSC::getVM(lexicalGlobalObject);
//     auto throwScope = DECLARE_THROW_SCOPE(vm);
//     UNUSED_PARAM(throwScope);
//     UNUSED_PARAM(callFrame);
//     auto& impl = castedThis->wrapped();
//     if (UNLIKELY(callFrame->argumentCount() < 1))
//         return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
//     EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
//     auto maxSize = convert<IDLUnsignedLong>(*lexicalGlobalObject, argument0.value());
//     RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
//     RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.setResourceTimingBufferSize(WTFMove(maxSize)); })));
// }

// JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_setResourceTimingBufferSize, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
// {
//     return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_setResourceTimingBufferSizeBody>(*lexicalGlobalObject, *callFrame, "setResourceTimingBufferSize");
// }

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_markBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto markName = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto markOptions = convert<IDLDictionary<PerformanceMarkOptions>>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLInterface<PerformanceMark>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.mark(*jsCast<JSDOMGlobalObject*>(lexicalGlobalObject), WTFMove(markName), WTFMove(markOptions)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_mark, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_markBody>(*lexicalGlobalObject, *callFrame, "mark");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_clearMarksBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->argument(0);
    auto markName = argument0.value().isUndefined() ? String() : convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.clearMarks(WTFMove(markName)); })));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearMarks, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_clearMarksBody>(*lexicalGlobalObject, *callFrame, "clearMarks");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_measureBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(callFrame->argumentCount() < 1))
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto measureName = convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto startOrMeasureOptions = argument1.value().isUndefined() ? std::optional<Converter<IDLUnion<IDLDOMString, IDLDictionary<PerformanceMeasureOptions>>>::ReturnType>() : std::optional<Converter<IDLUnion<IDLDOMString, IDLDictionary<PerformanceMeasureOptions>>>::ReturnType>(convert<IDLUnion<IDLDOMString, IDLDictionary<PerformanceMeasureOptions>>>(*lexicalGlobalObject, argument1.value()));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    EnsureStillAliveScope argument2 = callFrame->argument(2);
    auto endMark = argument2.value().isUndefined() ? String() : convert<IDLDOMString>(*lexicalGlobalObject, argument2.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLInterface<PerformanceMeasure>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, impl.measure(*jsCast<JSDOMGlobalObject*>(lexicalGlobalObject), WTFMove(measureName), WTFMove(startOrMeasureOptions), WTFMove(endMark)))));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_measure, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_measureBody>(*lexicalGlobalObject, *callFrame, "measure");
}

static inline JSC::EncodedJSValue jsPerformancePrototypeFunction_clearMeasuresBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSPerformance>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    EnsureStillAliveScope argument0 = callFrame->argument(0);
    auto measureName = argument0.value().isUndefined() ? String() : convert<IDLDOMString>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.clearMeasures(WTFMove(measureName)); })));
}

JSC_DEFINE_HOST_FUNCTION(jsPerformancePrototypeFunction_clearMeasures, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSPerformance>::call<jsPerformancePrototypeFunction_clearMeasuresBody>(*lexicalGlobalObject, *callFrame, "clearMeasures");
}

JSC::GCClient::IsoSubspace* JSPerformance::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSPerformance, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForPerformance.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForPerformance = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForPerformance.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForPerformance = std::forward<decltype(space)>(space); });
}

void JSPerformance::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSPerformance*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url "_s + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSPerformanceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, ASCIILiteral* reason)
{
    auto* jsPerformance = jsCast<JSPerformance*>(handle.slot()->asCell());
    ScriptExecutionContext* owner = WTF::getPtr(jsPerformance->wrapped().scriptExecutionContext());
    if (!owner)
        return false;
    if (UNLIKELY(reason))
        *reason = "Reachable from ScriptExecutionContext"_s;
    return visitor.containsOpaqueRoot(&jsPerformance->wrapped());
}

void JSPerformanceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsPerformance = static_cast<JSPerformance*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsPerformance->wrapped(), jsPerformance);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable : 4483)
extern "C" {
extern void (*const __identifier("??_7Performance@WebCore@@6B@")[])();
}
#else
extern "C" {
extern void* _ZTVN7WebCore11PerformanceE[];
}
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<Performance>&& impl)
{

    if constexpr (std::is_polymorphic_v<Performance>) {
#if ENABLE(BINDING_INTEGRITY)
        // const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7Performance@WebCore@@6B@");
#else
        // void* expectedVTablePointer = &_ZTVN7WebCore11PerformanceE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // Performance has subclasses. If Performance has subclasses that get passed
        // to toJS() we currently require Performance you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        // RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<Performance>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, Performance& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

Performance* JSPerformance::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSPerformance*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}