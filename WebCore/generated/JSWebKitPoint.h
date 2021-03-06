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

#ifndef JSWebKitPoint_h
#define JSWebKitPoint_h

#include "JSDOMBinding.h"
#include "WebKitPoint.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebKitPoint : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebKitPoint* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitPoint> impl)
    {
        JSWebKitPoint* ptr = new (JSC::allocateCell<JSWebKitPoint>(globalObject->globalData().heap)) JSWebKitPoint(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    WebKitPoint* impl() const { return m_impl.get(); }

private:
    RefPtr<WebKitPoint> m_impl;
protected:
    JSWebKitPoint(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebKitPoint>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebKitPoint*);
WebKitPoint* toWebKitPoint(JSC::JSValue);

class JSWebKitPointPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebKitPointPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitPointPrototype* ptr = new (JSC::allocateCell<JSWebKitPointPrototype>(globalData.heap)) JSWebKitPointPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebKitPointPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebKitPointConstructor : public DOMConstructorObject {
private:
    JSWebKitPointConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitPointConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitPointConstructor* ptr = new (JSC::allocateCell<JSWebKitPointConstructor>(*exec->heap())) JSWebKitPointConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebKitPoint(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

// Attributes

JSC::JSValue jsWebKitPointX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebKitPointX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebKitPointY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWebKitPointY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebKitPointConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
