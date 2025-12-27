/****************************************************************************
** Meta object code from reading C++ file 'mw.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mw.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mw.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN2MWE_t {};
} // unnamed namespace

template <> constexpr inline auto MW::qt_create_metaobjectdata<qt_meta_tag_ZN2MWE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MW",
        "read",
        "",
        "QFile*",
        "write",
        "pagerange",
        "select",
        "imageON",
        "modify_save_viewer",
        "modify_saveas_viewer",
        "quit",
        "triggered",
        "editSmooth",
        "onlinehelp",
        "quickHelp",
        "pdfHelp",
        "setModified",
        "newfile",
        "newWindow",
        "loadWindow",
        "load",
        "save",
        "saveas",
        "pref",
        "list",
        "pageflip",
        "notice",
        "error",
        "bg",
        "about",
        "selectOff",
        "setselect",
        "Material",
        "enablePaste",
        "revertsaved",
        "saveconfig",
        "setSavingMode",
        "SavingMode",
        "savingMode",
        "saveInTriggeredMode"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'read'
        QtMocHelpers::SignalData<void(QFile *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'write'
        QtMocHelpers::SignalData<void(QFile *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'pagerange'
        QtMocHelpers::SignalData<void(int, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'select'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'imageON'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'modify_save_viewer'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'modify_saveas_viewer'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'quit'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggered'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSmooth'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onlinehelp'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pdfHelp'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setModified'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'newfile'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newWindow'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadWindow'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveas'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pref'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'list'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pageflip'
        QtMocHelpers::SlotData<void(int, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'notice'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'error'
        QtMocHelpers::SlotData<void(const QString &, int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'bg'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'about'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectOff'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setselect'
        QtMocHelpers::SlotData<void(int, Material)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 32, 2 },
        }}),
        // Slot 'enablePaste'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'revertsaved'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveconfig'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSavingMode'
        QtMocHelpers::SlotData<void(SavingMode)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Slot 'saveInTriggeredMode'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MW, qt_meta_tag_ZN2MWE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MW::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2MWE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2MWE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN2MWE_t>.metaTypes,
    nullptr
} };

void MW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MW *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->read((*reinterpret_cast<std::add_pointer_t<QFile*>>(_a[1]))); break;
        case 1: _t->write((*reinterpret_cast<std::add_pointer_t<QFile*>>(_a[1]))); break;
        case 2: _t->pagerange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->select((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->imageON((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->modify_save_viewer((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->modify_saveas_viewer((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->quit(); break;
        case 8: _t->triggered(); break;
        case 9: _t->editSmooth(); break;
        case 10: _t->onlinehelp(); break;
        case 11: _t->quickHelp(); break;
        case 12: _t->pdfHelp(); break;
        case 13: _t->setModified((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->newfile(); break;
        case 15: _t->newWindow(); break;
        case 16: _t->loadWindow(); break;
        case 17: _t->load(); break;
        case 18: _t->save(); break;
        case 19: _t->saveas(); break;
        case 20: _t->pref(); break;
        case 21: _t->list(); break;
        case 22: _t->pageflip((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->notice((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 25: _t->bg(); break;
        case 26: _t->about(); break;
        case 27: _t->selectOff((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setselect((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Material>>(_a[2]))); break;
        case 29: _t->enablePaste(); break;
        case 30: _t->revertsaved(); break;
        case 31: _t->saveconfig(); break;
        case 32: _t->setSavingMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 33: _t->saveInTriggeredMode(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFile* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFile* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MW::*)(QFile * )>(_a, &MW::read, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(QFile * )>(_a, &MW::write, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(int , int )>(_a, &MW::pagerange, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(int , int )>(_a, &MW::select, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(bool )>(_a, &MW::imageON, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(bool )>(_a, &MW::modify_save_viewer, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)(bool )>(_a, &MW::modify_saveas_viewer, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)()>(_a, &MW::quit, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MW::*)()>(_a, &MW::triggered, 8))
            return;
    }
}

const QMetaObject *MW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2MWE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void MW::read(QFile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MW::write(QFile * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MW::pagerange(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void MW::select(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void MW::imageON(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MW::modify_save_viewer(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MW::modify_saveas_viewer(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MW::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MW::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
