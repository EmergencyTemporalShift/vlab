/****************************************************************************
** Meta object code from reading C++ file 'panel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../panel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5PanelE_t {};
} // unnamed namespace

template <> constexpr inline auto Panel::qt_create_metaobjectdata<qt_meta_tag_ZN5PanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Panel",
        "setEdited",
        "",
        "setPanelName",
        "s",
        "setPanelWidth",
        "i",
        "setPanelHeight",
        "setDoneEditing",
        "newItem",
        "HalignSelection",
        "horizontalDistributionSelected",
        "ValignSelection",
        "verticalDistributionSelected",
        "flipItemsVerticallySelected",
        "setBGColour",
        "GLfloat*",
        "setupMenu",
        "deleteMenuItem",
        "deletePage",
        "deleteSelect",
        "cloneSelect",
        "copySelect",
        "pasteCopy",
        "editSelect",
        "editPage",
        "toggleSnap",
        "preferences",
        "itemDefaults",
        "setfont",
        "fontSelectedFromDialog",
        "QFont",
        "fontRejectedFromDialog",
        "loadconfig",
        "saveconfig",
        "saveDefault",
        "reread",
        "restore",
        "reopen",
        "broadcast",
        "broadcastall",
        "load",
        "save",
        "saveslot",
        "saveas",
        "pagemenuHandler",
        "QAction*",
        "messmenuHandler",
        "removeFromGroup",
        "Button*",
        "help",
        "pdfHelp",
        "quickHelp",
        "about",
        "nothing",
        "execPanel",
        "editPanel",
        "ContinuousSavingMode",
        "TriggeredSavingMode",
        "ModeOff",
        "setDeviceRatio",
        "ratio",
        "getDeviceRatio",
        "updateColourScheme",
        "updateOpenDialogs"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setEdited'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setPanelName'
        QtMocHelpers::SlotData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'setPanelWidth'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'setPanelHeight'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'setDoneEditing'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newItem'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'HalignSelection'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'horizontalDistributionSelected'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ValignSelection'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'verticalDistributionSelected'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'flipItemsVerticallySelected'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBGColour'
        QtMocHelpers::SlotData<void(GLfloat *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'setupMenu'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteMenuItem'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deletePage'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteSelect'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cloneSelect'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copySelect'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pasteCopy'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSelect'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editPage'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleSnap'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'preferences'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemDefaults'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setfont'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fontSelectedFromDialog'
        QtMocHelpers::SlotData<void(QFont)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 2 },
        }}),
        // Slot 'fontRejectedFromDialog'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadconfig'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveconfig'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveDefault'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reread'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'restore'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reopen'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'broadcast'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'broadcastall'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveslot'
        QtMocHelpers::SlotData<void(QString)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'saveas'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pagemenuHandler'
        QtMocHelpers::SlotData<void(QAction *)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 2 },
        }}),
        // Slot 'messmenuHandler'
        QtMocHelpers::SlotData<void(QAction *)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 46, 2 },
        }}),
        // Slot 'removeFromGroup'
        QtMocHelpers::SlotData<void(Button *)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 49, 2 },
        }}),
        // Slot 'help'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pdfHelp'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'about'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nothing'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'execPanel'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editPanel'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ContinuousSavingMode'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'TriggeredSavingMode'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ModeOff'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDeviceRatio'
        QtMocHelpers::SlotData<void(int)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 61 },
        }}),
        // Slot 'getDeviceRatio'
        QtMocHelpers::SlotData<int()>(62, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'updateColourScheme'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateOpenDialogs'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Panel, qt_meta_tag_ZN5PanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Panel::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5PanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5PanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5PanelE_t>.metaTypes,
    nullptr
} };

void Panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Panel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setEdited((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setPanelName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setPanelWidth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setPanelHeight((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setDoneEditing(); break;
        case 5: _t->newItem((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->HalignSelection((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->horizontalDistributionSelected(); break;
        case 8: _t->ValignSelection((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->verticalDistributionSelected(); break;
        case 10: _t->flipItemsVerticallySelected(); break;
        case 11: _t->setBGColour((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 12: _t->setupMenu(); break;
        case 13: _t->deleteMenuItem(); break;
        case 14: _t->deletePage(); break;
        case 15: _t->deleteSelect(); break;
        case 16: _t->cloneSelect(); break;
        case 17: _t->copySelect(); break;
        case 18: _t->pasteCopy(); break;
        case 19: _t->editSelect(); break;
        case 20: _t->editPage(); break;
        case 21: _t->toggleSnap(); break;
        case 22: _t->preferences(); break;
        case 23: _t->itemDefaults(); break;
        case 24: _t->setfont(); break;
        case 25: _t->fontSelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 26: _t->fontRejectedFromDialog(); break;
        case 27: _t->loadconfig(); break;
        case 28: _t->saveconfig(); break;
        case 29: _t->saveDefault(); break;
        case 30: _t->reread(); break;
        case 31: _t->restore(); break;
        case 32: _t->reopen(); break;
        case 33: _t->broadcast(); break;
        case 34: _t->broadcastall(); break;
        case 35: _t->load(); break;
        case 36: _t->save(); break;
        case 37: _t->saveslot((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->saveas(); break;
        case 39: _t->pagemenuHandler((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 40: _t->messmenuHandler((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 41: _t->removeFromGroup((*reinterpret_cast<std::add_pointer_t<Button*>>(_a[1]))); break;
        case 42: _t->help(); break;
        case 43: _t->pdfHelp(); break;
        case 44: _t->quickHelp(); break;
        case 45: _t->about(); break;
        case 46: _t->nothing(); break;
        case 47: _t->execPanel(); break;
        case 48: _t->editPanel(); break;
        case 49: _t->ContinuousSavingMode(); break;
        case 50: _t->TriggeredSavingMode(); break;
        case 51: _t->ModeOff(); break;
        case 52: _t->setDeviceRatio((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 53: { int _r = _t->getDeviceRatio();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->updateColourScheme(); break;
        case 55: _t->updateOpenDialogs(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5PanelE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}
QT_WARNING_POP
