/****************************************************************************
** Meta object code from reading C++ file 'AdjacenciesWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AdjacenciesWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdjacenciesWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17AdjacenciesWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto AdjacenciesWindow::qt_create_metaobjectdata<qt_meta_tag_ZN17AdjacenciesWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AdjacenciesWindow",
        "buttonPressed",
        "",
        "adjacenciesClosed",
        "update",
        "cancelChanges",
        "applied",
        "updateAllViewports",
        "changeTarget",
        "index",
        "setALAdjacency",
        "setAAdjacency",
        "setARAdjacency",
        "setLAdjacency",
        "setRAdjacency",
        "setBLAdjacency",
        "setBAdjacency",
        "setBRAdjacency",
        "setAdjacency",
        "Patch::Adjacency",
        "adj"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'buttonPressed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'adjacenciesClosed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'update'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelChanges'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'applied'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateAllViewports'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeTarget'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setALAdjacency'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setAAdjacency'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setARAdjacency'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setLAdjacency'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setRAdjacency'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setBLAdjacency'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setBAdjacency'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setBRAdjacency'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setAdjacency'
        QtMocHelpers::SlotData<void(int, Patch::Adjacency)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { 0x80000000 | 19, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AdjacenciesWindow, qt_meta_tag_ZN17AdjacenciesWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AdjacenciesWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17AdjacenciesWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17AdjacenciesWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17AdjacenciesWindowE_t>.metaTypes,
    nullptr
} };

void AdjacenciesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AdjacenciesWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonPressed(); break;
        case 1: _t->adjacenciesClosed(); break;
        case 2: _t->update(); break;
        case 3: _t->cancelChanges(); break;
        case 4: _t->applied(); break;
        case 5: _t->updateAllViewports(); break;
        case 6: _t->changeTarget((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setALAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setAAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setARAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setLAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setRAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->setBLAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->setBAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->setBRAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->setAdjacency((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Patch::Adjacency>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AdjacenciesWindow::*)()>(_a, &AdjacenciesWindow::buttonPressed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AdjacenciesWindow::*)()>(_a, &AdjacenciesWindow::adjacenciesClosed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AdjacenciesWindow::*)()>(_a, &AdjacenciesWindow::update, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AdjacenciesWindow::*)()>(_a, &AdjacenciesWindow::cancelChanges, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AdjacenciesWindow::*)()>(_a, &AdjacenciesWindow::applied, 4))
            return;
    }
}

const QMetaObject *AdjacenciesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdjacenciesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17AdjacenciesWindowE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdjacenciesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void AdjacenciesWindow::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AdjacenciesWindow::adjacenciesClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AdjacenciesWindow::update()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AdjacenciesWindow::cancelChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AdjacenciesWindow::applied()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
