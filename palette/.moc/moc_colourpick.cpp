/****************************************************************************
** Meta object code from reading C++ file 'colourpick.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../colourpick.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colourpick.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10ColourPickE_t {};
} // unnamed namespace

template <> constexpr inline auto ColourPick::qt_create_metaobjectdata<qt_meta_tag_ZN10ColourPickE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColourPick",
        "applyEvent",
        "",
        "GLfloat*",
        "setInit",
        "Colour*",
        "displaySelect",
        "revertColour",
        "resetInit",
        "updateRed",
        "updateGreen",
        "updateBlue",
        "updateHue",
        "updateSat",
        "updateValue",
        "updateIntensity",
        "editHue",
        "editSat",
        "editVal",
        "editRed",
        "editGreen",
        "editBlue",
        "updateRGB",
        "updateHSV",
        "rgbmode",
        "hsvmode",
        "nomode",
        "setSelect",
        "apply",
        "closeEvent",
        "QCloseEvent*",
        "notify",
        "getColour",
        "initColour"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'applyEvent'
        QtMocHelpers::SignalData<void(GLfloat *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'setInit'
        QtMocHelpers::SignalData<void(Colour *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'displaySelect'
        QtMocHelpers::SignalData<void(Colour *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'revertColour'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetInit'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateRed'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateGreen'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateBlue'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateHue'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateSat'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateValue'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateIntensity'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'editHue'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSat'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editVal'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editRed'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editGreen'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editBlue'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateRGB'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateHSV'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rgbmode'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hsvmode'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nomode'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSelect'
        QtMocHelpers::SlotData<void(Colour *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'apply'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 2 },
        }}),
        // Slot 'notify'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'getColour'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initColour'
        QtMocHelpers::SlotData<void(GLfloat *)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColourPick, qt_meta_tag_ZN10ColourPickE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColourPick::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ColourPickE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ColourPickE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ColourPickE_t>.metaTypes,
    nullptr
} };

void ColourPick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColourPick *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applyEvent((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 1: _t->setInit((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 2: _t->displaySelect((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 3: _t->revertColour(); break;
        case 4: _t->resetInit(); break;
        case 5: _t->updateRed((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->updateGreen((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->updateBlue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->updateHue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateSat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->updateValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->updateIntensity((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->editHue(); break;
        case 13: _t->editSat(); break;
        case 14: _t->editVal(); break;
        case 15: _t->editRed(); break;
        case 16: _t->editGreen(); break;
        case 17: _t->editBlue(); break;
        case 18: _t->updateRGB(); break;
        case 19: _t->updateHSV(); break;
        case 20: _t->rgbmode(); break;
        case 21: _t->hsvmode(); break;
        case 22: _t->nomode(); break;
        case 23: _t->setSelect((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 24: _t->apply(); break;
        case 25: _t->closeEvent((*reinterpret_cast<std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 26: _t->notify((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->getColour(); break;
        case 28: _t->initColour((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColourPick::*)(GLfloat * )>(_a, &ColourPick::applyEvent, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourPick::*)(Colour * )>(_a, &ColourPick::setInit, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourPick::*)(Colour * )>(_a, &ColourPick::displaySelect, 2))
            return;
    }
}

const QMetaObject *ColourPick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColourPick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ColourPickE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColourPick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void ColourPick::applyEvent(GLfloat * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ColourPick::setInit(Colour * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ColourPick::displaySelect(Colour * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN11ColourWheelE_t {};
} // unnamed namespace

template <> constexpr inline auto ColourWheel::qt_create_metaobjectdata<qt_meta_tag_ZN11ColourWheelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColourWheel",
        "select",
        "",
        "Colour*",
        "reset",
        "revert",
        "apply",
        "setSelect",
        "initColour"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'select'
        QtMocHelpers::SignalData<void(Colour *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'reset'
        QtMocHelpers::SignalData<void(Colour *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'revert'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'apply'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSelect'
        QtMocHelpers::SlotData<void(Colour *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'initColour'
        QtMocHelpers::SlotData<void(Colour *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColourWheel, qt_meta_tag_ZN11ColourWheelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColourWheel::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourWheelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourWheelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ColourWheelE_t>.metaTypes,
    nullptr
} };

void ColourWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColourWheel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->select((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 1: _t->reset((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 2: _t->revert(); break;
        case 3: _t->apply(); break;
        case 4: _t->setSelect((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        case 5: _t->initColour((*reinterpret_cast<std::add_pointer_t<Colour*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColourWheel::*)(Colour * )>(_a, &ColourWheel::select, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourWheel::*)(Colour * )>(_a, &ColourWheel::reset, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourWheel::*)()>(_a, &ColourWheel::revert, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourWheel::*)()>(_a, &ColourWheel::apply, 3))
            return;
    }
}

const QMetaObject *ColourWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColourWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourWheelE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int ColourWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ColourWheel::select(Colour * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ColourWheel::reset(Colour * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ColourWheel::revert()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ColourWheel::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
