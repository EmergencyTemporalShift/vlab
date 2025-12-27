/****************************************************************************
** Meta object code from reading C++ file 'glcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glcanvas.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8glcanvasE_t {};
} // unnamed namespace

template <> constexpr inline auto glcanvas::qt_create_metaobjectdata<qt_meta_tag_ZN8glcanvasE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "glcanvas",
        "signalSave",
        "",
        "char*",
        "RestoreState",
        "Pause",
        "NewModel",
        "NewLSystem",
        "NewHomomorph",
        "NewView",
        "NewAnimate",
        "AnimateMode",
        "Step",
        "Run",
        "Forever",
        "Stop",
        "Rewind",
        "Clear",
        "RereadColors",
        "RereadAnimParams",
        "RereadSurfaces",
        "RereadContours",
        "RereadCurveXYZ",
        "RereadFunctions",
        "RereadDrawParams",
        "SetContinuousMode",
        "enabled",
        "SetExplicitMode",
        "StopRecording",
        "StartRecording",
        "DontAnimate",
        "RecordImageRGB",
        "RecordImagePNG",
        "RecordImageGIF",
        "RecordImageJPG",
        "RecordImageBMP",
        "RecordImageTIFF",
        "RecordImagePBM",
        "RecordImageTGA",
        "RecordImageRAY",
        "RecordImagePS",
        "RecordImageGLS",
        "RecordImageVV",
        "RecordStringText",
        "RecordStringBinary",
        "SaveAsRGB",
        "SaveAsPNG",
        "SaveAsGIF",
        "SaveAsJPG",
        "SaveAsBMP",
        "SaveAsTIFF",
        "SaveAsPBM",
        "SaveAsTGA",
        "SaveAsRAY",
        "SaveAsPS",
        "SaveAsSTR",
        "SaveAsSTRB",
        "SaveAsGLS",
        "SaveAsVV",
        "SaveAsOBJ",
        "SavePS",
        "SaveRGB",
        "SavePNG",
        "SavePDF",
        "SaveGIF",
        "SaveJPG",
        "SaveBMP",
        "SaveTIFF",
        "SavePBM",
        "SaveTGA",
        "SaveRAY",
        "SaveSTR",
        "SaveSTRB",
        "SaveGLS",
        "SaveVV",
        "SaveOBJ",
        "save",
        "saveAs",
        "InputText",
        "InputTextFrom",
        "InputBinary",
        "InputBinaryFrom",
        "Idle",
        "IdleContinuousMode",
        "setMenuVisible",
        "setMenuHidden",
        "RequestNewModel",
        "ActionToBePerformedInContinuousMode",
        "f",
        "ExecuteAction",
        "code",
        "setMenuTriggered",
        "QAction*",
        "exit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'signalSave'
        QtMocHelpers::SignalData<void(char *, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'RestoreState'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Pause'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewModel'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewLSystem'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewHomomorph'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewView'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewAnimate'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'AnimateMode'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Step'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Run'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Forever'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Stop'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Rewind'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Clear'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadColors'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadAnimParams'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadSurfaces'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadContours'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadCurveXYZ'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadFunctions'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadDrawParams'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetContinuousMode'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'SetExplicitMode'
        QtMocHelpers::SlotData<void(bool)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'StopRecording'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StartRecording'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DontAnimate'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageRGB'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImagePNG'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageGIF'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageJPG'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageBMP'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageTIFF'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImagePBM'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageTGA'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageRAY'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImagePS'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageGLS'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordImageVV'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordStringText'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RecordStringBinary'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsRGB'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsPNG'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsGIF'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsJPG'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsBMP'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsTIFF'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsPBM'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsTGA'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsRAY'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsPS'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsSTR'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsSTRB'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsGLS'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsVV'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveAsOBJ'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SavePS'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveRGB'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SavePNG'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SavePDF'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveGIF'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveJPG'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveBMP'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveTIFF'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SavePBM'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveTGA'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveRAY'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveSTR'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveSTRB'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveGLS'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveVV'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SaveOBJ'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'InputText'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'InputTextFrom'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'InputBinary'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'InputBinaryFrom'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Idle'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'IdleContinuousMode'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMenuVisible'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMenuHidden'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RequestNewModel'
        QtMocHelpers::SlotData<void(QString)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'ActionToBePerformedInContinuousMode'
        QtMocHelpers::SlotData<int(QString)>(87, 2, QMC::AccessPrivate, QMetaType::Int, {{
            { QMetaType::QString, 88 },
        }}),
        // Slot 'ExecuteAction'
        QtMocHelpers::SlotData<void(int)>(89, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 90 },
        }}),
        // Slot 'setMenuTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(91, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 92, 2 },
        }}),
        // Slot 'exit'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<glcanvas, qt_meta_tag_ZN8glcanvasE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject glcanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8glcanvasE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8glcanvasE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8glcanvasE_t>.metaTypes,
    nullptr
} };

void glcanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<glcanvas *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signalSave((*reinterpret_cast<std::add_pointer_t<char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->RestoreState(); break;
        case 2: _t->Pause(); break;
        case 3: _t->NewModel(); break;
        case 4: _t->NewLSystem(); break;
        case 5: _t->NewHomomorph(); break;
        case 6: _t->NewView(); break;
        case 7: _t->NewAnimate(); break;
        case 8: _t->AnimateMode(); break;
        case 9: _t->Step(); break;
        case 10: _t->Run(); break;
        case 11: _t->Forever(); break;
        case 12: _t->Stop(); break;
        case 13: _t->Rewind(); break;
        case 14: _t->Clear(); break;
        case 15: _t->RereadColors(); break;
        case 16: _t->RereadAnimParams(); break;
        case 17: _t->RereadSurfaces(); break;
        case 18: _t->RereadContours(); break;
        case 19: _t->RereadCurveXYZ(); break;
        case 20: _t->RereadFunctions(); break;
        case 21: _t->RereadDrawParams(); break;
        case 22: _t->SetContinuousMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->SetExplicitMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->StopRecording(); break;
        case 25: _t->StartRecording(); break;
        case 26: _t->DontAnimate(); break;
        case 27: _t->RecordImageRGB(); break;
        case 28: _t->RecordImagePNG(); break;
        case 29: _t->RecordImageGIF(); break;
        case 30: _t->RecordImageJPG(); break;
        case 31: _t->RecordImageBMP(); break;
        case 32: _t->RecordImageTIFF(); break;
        case 33: _t->RecordImagePBM(); break;
        case 34: _t->RecordImageTGA(); break;
        case 35: _t->RecordImageRAY(); break;
        case 36: _t->RecordImagePS(); break;
        case 37: _t->RecordImageGLS(); break;
        case 38: _t->RecordImageVV(); break;
        case 39: _t->RecordStringText(); break;
        case 40: _t->RecordStringBinary(); break;
        case 41: _t->SaveAsRGB(); break;
        case 42: _t->SaveAsPNG(); break;
        case 43: _t->SaveAsGIF(); break;
        case 44: _t->SaveAsJPG(); break;
        case 45: _t->SaveAsBMP(); break;
        case 46: _t->SaveAsTIFF(); break;
        case 47: _t->SaveAsPBM(); break;
        case 48: _t->SaveAsTGA(); break;
        case 49: _t->SaveAsRAY(); break;
        case 50: _t->SaveAsPS(); break;
        case 51: _t->SaveAsSTR(); break;
        case 52: _t->SaveAsSTRB(); break;
        case 53: _t->SaveAsGLS(); break;
        case 54: _t->SaveAsVV(); break;
        case 55: _t->SaveAsOBJ(); break;
        case 56: _t->SavePS(); break;
        case 57: _t->SaveRGB(); break;
        case 58: _t->SavePNG(); break;
        case 59: _t->SavePDF(); break;
        case 60: _t->SaveGIF(); break;
        case 61: _t->SaveJPG(); break;
        case 62: _t->SaveBMP(); break;
        case 63: _t->SaveTIFF(); break;
        case 64: _t->SavePBM(); break;
        case 65: _t->SaveTGA(); break;
        case 66: _t->SaveRAY(); break;
        case 67: _t->SaveSTR(); break;
        case 68: _t->SaveSTRB(); break;
        case 69: _t->SaveGLS(); break;
        case 70: _t->SaveVV(); break;
        case 71: _t->SaveOBJ(); break;
        case 72: _t->save(); break;
        case 73: _t->saveAs(); break;
        case 74: _t->InputText(); break;
        case 75: _t->InputTextFrom(); break;
        case 76: _t->InputBinary(); break;
        case 77: _t->InputBinaryFrom(); break;
        case 78: _t->Idle(); break;
        case 79: _t->IdleContinuousMode(); break;
        case 80: _t->setMenuVisible(); break;
        case 81: _t->setMenuHidden(); break;
        case 82: _t->RequestNewModel((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 83: { int _r = _t->ActionToBePerformedInContinuousMode((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 84: _t->ExecuteAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 85: _t->setMenuTriggered((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 86: _t->exit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (glcanvas::*)(char * , int )>(_a, &glcanvas::signalSave, 0))
            return;
    }
}

const QMetaObject *glcanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *glcanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8glcanvasE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int glcanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 87)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 87;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 87)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 87;
    }
    return _id;
}

// SIGNAL 0
void glcanvas::signalSave(char * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
