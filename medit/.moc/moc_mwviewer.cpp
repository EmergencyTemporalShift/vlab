/****************************************************************************
** Meta object code from reading C++ file 'mwviewer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mwviewer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mwviewer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8MWViewerE_t {};
} // unnamed namespace

template <> constexpr inline auto MWViewer::qt_create_metaobjectdata<qt_meta_tag_ZN8MWViewerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MWViewer",
        "notice",
        "",
        "error",
        "pageflip",
        "setselect",
        "Material",
        "edit",
        "modify",
        "setdefault",
        "getRange",
        "newfile_signal",
        "newWindow_signal",
        "loadWindow_signal",
        "load_signal",
        "save_signal",
        "saveas_signal",
        "revertsaved_signal",
        "changeSavingMode",
        "SavingMode",
        "read",
        "QFile*",
        "write",
        "selectall",
        "selectpage",
        "selectrange",
        "select",
        "Medit",
        "cut",
        "copy",
        "paste",
        "insert",
        "interpolate",
        "defaultmat",
        "setMaterial",
        "showMaterial",
        "setDefault",
        "xspage",
        "smpage",
        "mdpage",
        "lgpage",
        "nextpage",
        "prevpage",
        "firstpage",
        "gotopage",
        "pagerange",
        "showBackground",
        "rangeDialog",
        "enablePaste",
        "setSmoothness",
        "setEnhance",
        "setPageSmooth",
        "newfile",
        "newWindow",
        "loadWindow",
        "load",
        "save",
        "saveas",
        "revertsaved",
        "setmodified_save",
        "setmodified_save_as",
        "ContinuousSavingMode",
        "TriggeredSavingMode",
        "ModeOff",
        "setSavingMode",
        "savingMode",
        "saveInContinuouMode",
        "modified",
        "saveInTriggeredMode"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'notice'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'error'
        QtMocHelpers::SignalData<void(const QString &, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'pageflip'
        QtMocHelpers::SignalData<void(int, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'setselect'
        QtMocHelpers::SignalData<void(int, Material)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 6, 2 },
        }}),
        // Signal 'edit'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modify'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'setdefault'
        QtMocHelpers::SignalData<void(Material)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'getRange'
        QtMocHelpers::SignalData<void(int, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'newfile_signal'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newWindow_signal'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadWindow_signal'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'load_signal'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'save_signal'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveas_signal'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'revertsaved_signal'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changeSavingMode'
        QtMocHelpers::SignalData<void(SavingMode)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 2 },
        }}),
        // Slot 'read'
        QtMocHelpers::SlotData<void(QFile *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Slot 'write'
        QtMocHelpers::SlotData<void(QFile *)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Slot 'selectall'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectpage'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectrange'
        QtMocHelpers::SlotData<void(int, int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'select'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'Medit'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cut'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'insert'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'interpolate'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'defaultmat'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMaterial'
        QtMocHelpers::SlotData<void(Material)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'showMaterial'
        QtMocHelpers::SlotData<void(Material)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'setDefault'
        QtMocHelpers::SlotData<void(Material)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'xspage'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'smpage'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdpage'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lgpage'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextpage'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'prevpage'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'firstpage'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'gotopage'
        QtMocHelpers::SlotData<void(int)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'pagerange'
        QtMocHelpers::SlotData<void(int, int)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'showBackground'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'rangeDialog'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enablePaste'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSmoothness'
        QtMocHelpers::SlotData<void(int)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setEnhance'
        QtMocHelpers::SlotData<void(bool)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPageSmooth'
        QtMocHelpers::SlotData<void(bool)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'newfile'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newWindow'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadWindow'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveas'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'revertsaved'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setmodified_save'
        QtMocHelpers::SlotData<void(bool)>(59, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setmodified_save_as'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'ContinuousSavingMode'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'TriggeredSavingMode'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ModeOff'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSavingMode'
        QtMocHelpers::SlotData<void(SavingMode)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 65 },
        }}),
        // Slot 'saveInContinuouMode'
        QtMocHelpers::SlotData<void(bool)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 67 },
        }}),
        // Slot 'saveInTriggeredMode'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MWViewer, qt_meta_tag_ZN8MWViewerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MWViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWViewerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWViewerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8MWViewerE_t>.metaTypes,
    nullptr
} };

void MWViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MWViewer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->notice((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->pageflip((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setselect((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Material>>(_a[2]))); break;
        case 4: _t->edit(); break;
        case 5: _t->modify((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setdefault((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 7: _t->getRange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->newfile_signal(); break;
        case 9: _t->newWindow_signal(); break;
        case 10: _t->loadWindow_signal(); break;
        case 11: _t->load_signal(); break;
        case 12: _t->save_signal(); break;
        case 13: _t->saveas_signal(); break;
        case 14: _t->revertsaved_signal(); break;
        case 15: _t->changeSavingMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 16: _t->read((*reinterpret_cast<std::add_pointer_t<QFile*>>(_a[1]))); break;
        case 17: _t->write((*reinterpret_cast<std::add_pointer_t<QFile*>>(_a[1]))); break;
        case 18: _t->selectall(); break;
        case 19: _t->selectpage(); break;
        case 20: _t->selectrange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->select((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->Medit(); break;
        case 23: _t->cut(); break;
        case 24: _t->copy(); break;
        case 25: _t->paste(); break;
        case 26: _t->insert(); break;
        case 27: _t->interpolate(); break;
        case 28: _t->defaultmat(); break;
        case 29: _t->setMaterial((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 30: _t->showMaterial((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 31: _t->setDefault((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 32: _t->xspage(); break;
        case 33: _t->smpage(); break;
        case 34: _t->mdpage(); break;
        case 35: _t->lgpage(); break;
        case 36: _t->nextpage(); break;
        case 37: _t->prevpage(); break;
        case 38: _t->firstpage(); break;
        case 39: _t->gotopage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->pagerange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 41: _t->showBackground((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->rangeDialog(); break;
        case 43: _t->enablePaste(); break;
        case 44: _t->setSmoothness((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->setEnhance((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 46: _t->setPageSmooth((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->newfile(); break;
        case 48: _t->newWindow(); break;
        case 49: _t->loadWindow(); break;
        case 50: _t->load(); break;
        case 51: _t->save(); break;
        case 52: _t->saveas(); break;
        case 53: _t->revertsaved(); break;
        case 54: _t->setmodified_save((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->setmodified_save_as((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->ContinuousSavingMode(); break;
        case 57: _t->TriggeredSavingMode(); break;
        case 58: _t->ModeOff(); break;
        case 59: _t->setSavingMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 60: _t->saveInContinuouMode((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->saveInTriggeredMode(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFile* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFile* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(const QString & )>(_a, &MWViewer::notice, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(const QString & , int )>(_a, &MWViewer::error, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(int , int )>(_a, &MWViewer::pageflip, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(int , Material )>(_a, &MWViewer::setselect, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::edit, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(bool )>(_a, &MWViewer::modify, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(Material )>(_a, &MWViewer::setdefault, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(int , int )>(_a, &MWViewer::getRange, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::newfile_signal, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::newWindow_signal, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::loadWindow_signal, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::load_signal, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::save_signal, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::saveas_signal, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)()>(_a, &MWViewer::revertsaved_signal, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWViewer::*)(SavingMode )>(_a, &MWViewer::changeSavingMode, 15))
            return;
    }
}

const QMetaObject *MWViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MWViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWViewerE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int MWViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void MWViewer::notice(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MWViewer::error(const QString & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MWViewer::pageflip(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void MWViewer::setselect(int _t1, Material _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void MWViewer::edit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MWViewer::modify(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MWViewer::setdefault(Material _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MWViewer::getRange(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void MWViewer::newfile_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MWViewer::newWindow_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MWViewer::loadWindow_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MWViewer::load_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MWViewer::save_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MWViewer::saveas_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MWViewer::revertsaved_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MWViewer::changeSavingMode(SavingMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}
QT_WARNING_POP
