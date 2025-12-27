/****************************************************************************
** Meta object code from reading C++ file 'EventButton.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EventButton.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventButton.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11EventButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto EventButton::qt_create_metaobjectdata<qt_meta_tag_ZN11EventButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EventButton",
        "rightClicked",
        "",
        "QMouseEvent*",
        "e",
        "leftClicked",
        "leftDoubleClicked",
        "mousePressEvent",
        "mouseDoubleClickEvent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rightClicked'
        QtMocHelpers::SignalData<void(QMouseEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'leftClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leftDoubleClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mousePressEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'mouseDoubleClickEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EventButton, qt_meta_tag_ZN11EventButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EventButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EventButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EventButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11EventButtonE_t>.metaTypes,
    nullptr
} };

void EventButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EventButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rightClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->leftClicked(); break;
        case 2: _t->leftDoubleClicked(); break;
        case 3: _t->mousePressEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 4: _t->mouseDoubleClickEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EventButton::*)(QMouseEvent * )>(_a, &EventButton::rightClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EventButton::*)()>(_a, &EventButton::leftClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EventButton::*)()>(_a, &EventButton::leftDoubleClicked, 2))
            return;
    }
}

const QMetaObject *EventButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EventButtonE_t>.strings))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int EventButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EventButton::rightClicked(QMouseEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void EventButton::leftClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EventButton::leftDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
