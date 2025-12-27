/****************************************************************************
** Meta object code from reading C++ file 'gallery.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gallery.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gallery.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7GalleryE_t {};
} // unnamed namespace

template <> constexpr inline auto Gallery::qt_create_metaobjectdata<qt_meta_tag_ZN7GalleryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Gallery",
        "reloadAll",
        "",
        "saveAll",
        "saveFuncSet",
        "std::string",
        "saveConSet",
        "saveAllAs",
        "createItem",
        "removeItem",
        "duplicateItem",
        "addItemToLayout",
        "Item*",
        "it",
        "activateItemMenu",
        "createItemWithoutDialog",
        "loadItem",
        "quit",
        "addItem",
        "pItem",
        "setSelectedItem",
        "unselectItems",
        "changeSize",
        "mousePressEvent",
        "QMouseEvent*",
        "ev",
        "mouseReleaseEvent",
        "valueChanged",
        "v",
        "SetContinuousMode",
        "enabled",
        "SetTriggeredMode",
        "SetExplicitMode",
        "setSavingMode",
        "getSavingMode",
        "SavingMode",
        "Idle",
        "RequestReload"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'reloadAll'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveAll'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveFuncSet'
        QtMocHelpers::SlotData<void(std::string)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'saveConSet'
        QtMocHelpers::SlotData<void(std::string)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'saveAllAs'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'createItem'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeItem'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'duplicateItem'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addItemToLayout'
        QtMocHelpers::SlotData<void(Item *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'activateItemMenu'
        QtMocHelpers::SlotData<void(Item *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'createItemWithoutDialog'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadItem'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quit'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addItem'
        QtMocHelpers::SlotData<void(Item *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 19 },
        }}),
        // Slot 'setSelectedItem'
        QtMocHelpers::SlotData<void(Item *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 19 },
        }}),
        // Slot 'unselectItems'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeSize'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mousePressEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'mouseReleaseEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'valueChanged'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Slot 'SetContinuousMode'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'SetTriggeredMode'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'SetExplicitMode'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'setSavingMode'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getSavingMode'
        QtMocHelpers::SlotData<SavingMode()>(34, 2, QMC::AccessPublic, 0x80000000 | 35),
        // Slot 'Idle'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RequestReload'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Gallery, qt_meta_tag_ZN7GalleryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Gallery::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GalleryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GalleryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7GalleryE_t>.metaTypes,
    nullptr
} };

void Gallery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Gallery *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reloadAll(); break;
        case 1: _t->saveAll(); break;
        case 2: _t->saveFuncSet((*reinterpret_cast<std::add_pointer_t<std::string>>(_a[1]))); break;
        case 3: _t->saveConSet((*reinterpret_cast<std::add_pointer_t<std::string>>(_a[1]))); break;
        case 4: _t->saveAllAs(); break;
        case 5: _t->createItem(); break;
        case 6: _t->removeItem(); break;
        case 7: _t->duplicateItem(); break;
        case 8: _t->addItemToLayout((*reinterpret_cast<std::add_pointer_t<Item*>>(_a[1]))); break;
        case 9: _t->activateItemMenu((*reinterpret_cast<std::add_pointer_t<Item*>>(_a[1]))); break;
        case 10: _t->createItemWithoutDialog(); break;
        case 11: _t->loadItem(); break;
        case 12: _t->quit(); break;
        case 13: _t->addItem((*reinterpret_cast<std::add_pointer_t<Item*>>(_a[1]))); break;
        case 14: _t->setSelectedItem((*reinterpret_cast<std::add_pointer_t<Item*>>(_a[1]))); break;
        case 15: _t->unselectItems(); break;
        case 16: _t->changeSize(); break;
        case 17: _t->mousePressEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 18: _t->mouseReleaseEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 19: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->SetContinuousMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->SetTriggeredMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->SetExplicitMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setSavingMode(); break;
        case 24: { SavingMode _r = _t->getSavingMode();
            if (_a[0]) *reinterpret_cast<SavingMode*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->Idle(); break;
        case 26: _t->RequestReload(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Item* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Item* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Item* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Item* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Gallery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gallery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GalleryE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gallery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
