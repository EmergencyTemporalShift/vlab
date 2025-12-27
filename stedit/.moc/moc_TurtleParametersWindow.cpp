/****************************************************************************
** Meta object code from reading C++ file 'TurtleParametersWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TurtleParametersWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TurtleParametersWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22TurtleParametersWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto TurtleParametersWindow::qt_create_metaobjectdata<qt_meta_tag_ZN22TurtleParametersWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TurtleParametersWindow",
        "buttonPressed",
        "",
        "updateContactPoint",
        "Point",
        "point",
        "updateEndPoint",
        "updateHeading",
        "Vector3",
        "vector",
        "updateUp",
        "updateSize",
        "value",
        "setContactPoint",
        "setEndPoint",
        "setHeading",
        "setUp",
        "setSize",
        "confirm",
        "cancel",
        "reset",
        "setPreview",
        "setNormalize",
        "setOrthagonalizeHeading",
        "setOrthagonalizeUp",
        "contactPointEdited",
        "endPointEdited",
        "headingEdited",
        "upEdited",
        "sizeEdited"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'buttonPressed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateContactPoint'
        QtMocHelpers::SignalData<void(Point)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'updateEndPoint'
        QtMocHelpers::SignalData<void(Point)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'updateHeading'
        QtMocHelpers::SignalData<void(Vector3)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'updateUp'
        QtMocHelpers::SignalData<void(Vector3)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'updateSize'
        QtMocHelpers::SignalData<void(double)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 12 },
        }}),
        // Slot 'setContactPoint'
        QtMocHelpers::SlotData<void(Point)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'setEndPoint'
        QtMocHelpers::SlotData<void(Point)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'setHeading'
        QtMocHelpers::SlotData<void(Vector3)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setUp'
        QtMocHelpers::SlotData<void(Vector3)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setSize'
        QtMocHelpers::SlotData<void(double)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 12 },
        }}),
        // Slot 'confirm'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setPreview'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setNormalize'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setOrthagonalizeHeading'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setOrthagonalizeUp'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'contactPointEdited'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'endPointEdited'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'headingEdited'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'upEdited'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sizeEdited'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TurtleParametersWindow, qt_meta_tag_ZN22TurtleParametersWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TurtleParametersWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TurtleParametersWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TurtleParametersWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22TurtleParametersWindowE_t>.metaTypes,
    nullptr
} };

void TurtleParametersWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TurtleParametersWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonPressed(); break;
        case 1: _t->updateContactPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 2: _t->updateEndPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 3: _t->updateHeading((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 4: _t->updateUp((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 5: _t->updateSize((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->setContactPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 7: _t->setEndPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 8: _t->setHeading((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 9: _t->setUp((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 10: _t->setSize((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->confirm(); break;
        case 12: _t->cancel(); break;
        case 13: _t->reset(); break;
        case 14: _t->setPreview((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setNormalize((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->setOrthagonalizeHeading((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setOrthagonalizeUp((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->contactPointEdited(); break;
        case 19: _t->endPointEdited(); break;
        case 20: _t->headingEdited(); break;
        case 21: _t->upEdited(); break;
        case 22: _t->sizeEdited(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)()>(_a, &TurtleParametersWindow::buttonPressed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)(Point )>(_a, &TurtleParametersWindow::updateContactPoint, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)(Point )>(_a, &TurtleParametersWindow::updateEndPoint, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)(Vector3 )>(_a, &TurtleParametersWindow::updateHeading, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)(Vector3 )>(_a, &TurtleParametersWindow::updateUp, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TurtleParametersWindow::*)(double )>(_a, &TurtleParametersWindow::updateSize, 5))
            return;
    }
}

const QMetaObject *TurtleParametersWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TurtleParametersWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TurtleParametersWindowE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TurtleParametersWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void TurtleParametersWindow::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TurtleParametersWindow::updateContactPoint(Point _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TurtleParametersWindow::updateEndPoint(Point _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TurtleParametersWindow::updateHeading(Vector3 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TurtleParametersWindow::updateUp(Vector3 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TurtleParametersWindow::updateSize(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
