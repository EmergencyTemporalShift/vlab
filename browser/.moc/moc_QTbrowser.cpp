/****************************************************************************
** Meta object code from reading C++ file 'QTbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QTbrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QTbrowser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QTbrowserE_t {};
} // unnamed namespace

template <> constexpr inline auto QTbrowser::qt_create_metaobjectdata<qt_meta_tag_ZN9QTbrowserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QTbrowser",
        "idleIconLoader",
        "",
        "loadArbitraryIcon",
        "QRect",
        "view",
        "bool&",
        "update",
        "newBrowserCB",
        "openShellCB",
        "fileopenCB",
        "customizeCB",
        "checkDatabaseCB",
        "showExtCB",
        "showAllExtCB",
        "showIconCB",
        "hideAllIconsCB",
        "showAllIconsCB",
        "centreCB",
        "centreHyperlinkTargetCB",
        "beginTreeCB",
        "beginFromRootCB",
        "getObjectCB",
        "cut_menu_cb",
        "copy_node_menu_cb",
        "copy_subtree_menu_cb",
        "paste_menu_cb",
        "delete_menu_cb",
        "add_object_menu_cb",
        "add_Hobject_menu_cb",
        "hypercopy_node_cb",
        "hypercopy_subtree_cb",
        "links_button_cb",
        "about_vlab_cb",
        "about_Rayshade_cb",
        "helpCB",
        "newEnviroHelp",
        "rayshadeHelp",
        "newCpfgHelp",
        "newLpfgHelp",
        "newVlabHelp",
        "quickHelp",
        "gettingStartedHelp",
        "vlabToolsHelp",
        "find_menu_cb",
        "importObject",
        "exportObject",
        "inputReady",
        "socket",
        "fileopenconsoleCB",
        "applySettings",
        "BrowserSettings",
        "bset",
        "applySettingsColors",
        "rename_cb",
        "pluginsChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'idleIconLoader'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadArbitraryIcon'
        QtMocHelpers::SlotData<bool(const QRect &, bool &)>(3, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'newBrowserCB'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openShellCB'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fileopenCB'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'customizeCB'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'checkDatabaseCB'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showExtCB'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showAllExtCB'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showIconCB'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hideAllIconsCB'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showAllIconsCB'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'centreCB'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'centreHyperlinkTargetCB'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'beginTreeCB'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'beginFromRootCB'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getObjectCB'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cut_menu_cb'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy_node_menu_cb'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy_subtree_menu_cb'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste_menu_cb'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'delete_menu_cb'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'add_object_menu_cb'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'add_Hobject_menu_cb'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hypercopy_node_cb'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hypercopy_subtree_cb'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'links_button_cb'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'about_vlab_cb'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'about_Rayshade_cb'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'helpCB'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newEnviroHelp'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rayshadeHelp'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newCpfgHelp'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newLpfgHelp'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newVlabHelp'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'gettingStartedHelp'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'vlabToolsHelp'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'find_menu_cb'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'importObject'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exportObject'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'inputReady'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 48 },
        }}),
        // Slot 'fileopenconsoleCB'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applySettings'
        QtMocHelpers::SlotData<void(const BrowserSettings &)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Slot 'applySettingsColors'
        QtMocHelpers::SlotData<void(const BrowserSettings &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Slot 'rename_cb'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pluginsChanged'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QTbrowser, qt_meta_tag_ZN9QTbrowserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QTbrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QTbrowserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QTbrowserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9QTbrowserE_t>.metaTypes,
    nullptr
} };

void QTbrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QTbrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idleIconLoader(); break;
        case 1: { bool _r = _t->loadArbitraryIcon((*reinterpret_cast<std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool&>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->newBrowserCB(); break;
        case 3: _t->openShellCB(); break;
        case 4: _t->fileopenCB(); break;
        case 5: _t->customizeCB(); break;
        case 6: _t->checkDatabaseCB(); break;
        case 7: _t->showExtCB(); break;
        case 8: _t->showAllExtCB(); break;
        case 9: _t->showIconCB(); break;
        case 10: _t->hideAllIconsCB(); break;
        case 11: _t->showAllIconsCB(); break;
        case 12: _t->centreCB(); break;
        case 13: _t->centreHyperlinkTargetCB(); break;
        case 14: _t->beginTreeCB(); break;
        case 15: _t->beginFromRootCB(); break;
        case 16: _t->getObjectCB(); break;
        case 17: _t->cut_menu_cb(); break;
        case 18: _t->copy_node_menu_cb(); break;
        case 19: _t->copy_subtree_menu_cb(); break;
        case 20: _t->paste_menu_cb(); break;
        case 21: _t->delete_menu_cb(); break;
        case 22: _t->add_object_menu_cb(); break;
        case 23: _t->add_Hobject_menu_cb(); break;
        case 24: _t->hypercopy_node_cb(); break;
        case 25: _t->hypercopy_subtree_cb(); break;
        case 26: _t->links_button_cb(); break;
        case 27: _t->about_vlab_cb(); break;
        case 28: _t->about_Rayshade_cb(); break;
        case 29: _t->helpCB(); break;
        case 30: _t->newEnviroHelp(); break;
        case 31: _t->rayshadeHelp(); break;
        case 32: _t->newCpfgHelp(); break;
        case 33: _t->newLpfgHelp(); break;
        case 34: _t->newVlabHelp(); break;
        case 35: _t->quickHelp(); break;
        case 36: _t->gettingStartedHelp(); break;
        case 37: _t->vlabToolsHelp(); break;
        case 38: _t->find_menu_cb(); break;
        case 39: _t->importObject(); break;
        case 40: _t->exportObject(); break;
        case 41: _t->inputReady((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->fileopenconsoleCB(); break;
        case 43: _t->applySettings((*reinterpret_cast<std::add_pointer_t<BrowserSettings>>(_a[1]))); break;
        case 44: _t->applySettingsColors((*reinterpret_cast<std::add_pointer_t<BrowserSettings>>(_a[1]))); break;
        case 45: _t->rename_cb(); break;
        case 46: _t->pluginsChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *QTbrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTbrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9QTbrowserE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QTbrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
    }
    return _id;
}
QT_WARNING_POP
