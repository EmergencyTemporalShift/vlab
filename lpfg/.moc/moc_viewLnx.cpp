/****************************************************************************
** Meta object code from reading C++ file 'viewLnx.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viewLnx.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewLnx.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4ViewE_t {};
} // unnamed namespace

template <> constexpr inline auto View::qt_create_metaobjectdata<qt_meta_tag_ZN4ViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "View",
        "keyPress",
        "",
        "QKeyEvent*",
        "keyRelease",
        "save",
        "resizeDone",
        "addDockWindows",
        "std::string",
        "title",
        "Rect",
        "r",
        "i",
        "removeDockWindows",
        "id",
        "placeDockWindows",
        "resetDockWindowPosition",
        "addNewWidget",
        "Step",
        "Run",
        "Forever",
        "Stop",
        "Pause",
        "Rewind",
        "NewModel",
        "NewLsystem",
        "Rerun",
        "NewView",
        "RereadDrawParams",
        "RereadAnimParams",
        "Clear",
        "Recording",
        "RereadColors",
        "RereadSurfaces",
        "RereadContours",
        "RereadFunctions",
        "StringLoad",
        "StringOutput",
        "SetExplicitMode",
        "SetContinuousMode",
        "RestoreState",
        "ActionTriggered",
        "getAlphaChannel",
        "Idle",
        "RequestNewModel",
        "ActionToBePerformedInContinuousMode",
        "f",
        "ExecuteAction",
        "code",
        "saveAs",
        "Animate",
        "aboutCB",
        "helpCB",
        "pdfHelpCB",
        "quickHelp",
        "mousePressed",
        "QPoint",
        "mouseMoved",
        "mouseReleased",
        "resetWindowTitle",
        "handleScreenChanged",
        "QScreen*",
        "screen"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keyPress'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'keyRelease'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resizeDone'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addDockWindows'
        QtMocHelpers::SlotData<void(const std::string &, const Rect &, int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 10, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'removeDockWindows'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'placeDockWindows'
        QtMocHelpers::SlotData<void(int, const Rect &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { 0x80000000 | 10, 11 },
        }}),
        // Slot 'resetDockWindowPosition'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addNewWidget'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Step'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Run'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Forever'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Stop'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Pause'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Rewind'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewModel'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewLsystem'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Rerun'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'NewView'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadDrawParams'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadAnimParams'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Clear'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Recording'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadColors'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadSurfaces'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadContours'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RereadFunctions'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StringLoad'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'StringOutput'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'SetExplicitMode'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'SetContinuousMode'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'RestoreState'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ActionTriggered'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getAlphaChannel'
        QtMocHelpers::SlotData<bool()>(42, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'Idle'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RequestNewModel'
        QtMocHelpers::SlotData<void(QString)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'ActionToBePerformedInContinuousMode'
        QtMocHelpers::SlotData<int(QString)>(45, 2, QMC::AccessPrivate, QMetaType::Int, {{
            { QMetaType::QString, 46 },
        }}),
        // Slot 'ExecuteAction'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 48 },
        }}),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'Animate'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'aboutCB'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'helpCB'
        QtMocHelpers::SlotData<void() const>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pdfHelpCB'
        QtMocHelpers::SlotData<void() const>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mousePressed'
        QtMocHelpers::SlotData<void(const QPoint &)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 56, 2 },
        }}),
        // Slot 'mouseMoved'
        QtMocHelpers::SlotData<void(const QPoint &)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 56, 2 },
        }}),
        // Slot 'mouseReleased'
        QtMocHelpers::SlotData<void(const QPoint &)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 56, 2 },
        }}),
        // Slot 'resetWindowTitle'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleScreenChanged'
        QtMocHelpers::SlotData<void(QScreen *)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 61, 62 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<View, qt_meta_tag_ZN4ViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4ViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4ViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4ViewE_t>.metaTypes,
    nullptr
} };

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<View *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyPress((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 1: _t->keyRelease((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 2: _t->save(); break;
        case 3: _t->resizeDone(); break;
        case 4: _t->addDockWindows((*reinterpret_cast<std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Rect>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->removeDockWindows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->placeDockWindows((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Rect>>(_a[2]))); break;
        case 7: _t->resetDockWindowPosition(); break;
        case 8: _t->addNewWidget(); break;
        case 9: _t->Step(); break;
        case 10: _t->Run(); break;
        case 11: _t->Forever(); break;
        case 12: _t->Stop(); break;
        case 13: _t->Pause(); break;
        case 14: _t->Rewind(); break;
        case 15: _t->NewModel(); break;
        case 16: _t->NewLsystem(); break;
        case 17: _t->Rerun(); break;
        case 18: _t->NewView(); break;
        case 19: _t->RereadDrawParams(); break;
        case 20: _t->RereadAnimParams(); break;
        case 21: _t->Clear(); break;
        case 22: _t->Recording(); break;
        case 23: _t->RereadColors(); break;
        case 24: _t->RereadSurfaces(); break;
        case 25: _t->RereadContours(); break;
        case 26: _t->RereadFunctions(); break;
        case 27: _t->StringLoad(); break;
        case 28: _t->StringOutput(); break;
        case 29: _t->SetExplicitMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->SetContinuousMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->RestoreState(); break;
        case 32: _t->ActionTriggered(); break;
        case 33: { bool _r = _t->getAlphaChannel();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->Idle(); break;
        case 35: _t->RequestNewModel((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: { int _r = _t->ActionToBePerformedInContinuousMode((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->ExecuteAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->saveAs(); break;
        case 39: _t->Animate(); break;
        case 40: _t->aboutCB(); break;
        case 41: _t->helpCB(); break;
        case 42: _t->pdfHelpCB(); break;
        case 43: _t->quickHelp(); break;
        case 44: _t->mousePressed((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 45: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 46: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 47: _t->resetWindowTitle(); break;
        case 48: _t->handleScreenChanged((*reinterpret_cast<std::add_pointer_t<QScreen*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QScreen* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (View::*)(QKeyEvent * )>(_a, &View::keyPress, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (View::*)(QKeyEvent * )>(_a, &View::keyRelease, 1))
            return;
    }
}

const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4ViewE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void View::keyPress(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void View::keyRelease(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
