/****************************************************************************
** Meta object code from reading C++ file 'CustomizeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CustomizeDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomizeDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15CustomizeDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CustomizeDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15CustomizeDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CustomizeDialog",
        "settingsChanged",
        "",
        "BrowserSettings",
        "settingsColorsChanged",
        "fontSettingsChanged",
        "renderSettings",
        "renderSettingsFont",
        "QFont",
        "renderSettingsColors",
        "rereadWidgets",
        "saveAs_cb",
        "save_cb",
        "delete_cb",
        "loadSettings_cb",
        "loadSettingsColors_cb",
        "loadDefaults_cb",
        "font_cb",
        "iconSize_cb",
        "resetToCurrentFont",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "btn"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'settingsChanged'
        QtMocHelpers::SignalData<void(const BrowserSettings &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'settingsColorsChanged'
        QtMocHelpers::SignalData<void(const BrowserSettings &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'fontSettingsChanged'
        QtMocHelpers::SignalData<void(const BrowserSettings &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'renderSettings'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'renderSettingsFont'
        QtMocHelpers::SlotData<void(QFont)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'renderSettingsColors'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rereadWidgets'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveAs_cb'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'save_cb'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'delete_cb'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSettings_cb'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSettingsColors_cb'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadDefaults_cb'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'font_cb'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'iconSize_cb'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'resetToCurrentFont'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CustomizeDialog, qt_meta_tag_ZN15CustomizeDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CustomizeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CustomizeDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CustomizeDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15CustomizeDialogE_t>.metaTypes,
    nullptr
} };

void CustomizeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CustomizeDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast<std::add_pointer_t<BrowserSettings>>(_a[1]))); break;
        case 1: _t->settingsColorsChanged((*reinterpret_cast<std::add_pointer_t<BrowserSettings>>(_a[1]))); break;
        case 2: _t->fontSettingsChanged((*reinterpret_cast<std::add_pointer_t<BrowserSettings>>(_a[1]))); break;
        case 3: _t->renderSettings(); break;
        case 4: _t->renderSettingsFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 5: _t->renderSettingsColors(); break;
        case 6: _t->rereadWidgets(); break;
        case 7: _t->saveAs_cb(); break;
        case 8: _t->save_cb(); break;
        case 9: _t->delete_cb(); break;
        case 10: _t->loadSettings_cb(); break;
        case 11: _t->loadSettingsColors_cb(); break;
        case 12: _t->loadDefaults_cb(); break;
        case 13: _t->font_cb(); break;
        case 14: _t->iconSize_cb((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->resetToCurrentFont(); break;
        case 16: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CustomizeDialog::*)(const BrowserSettings & )>(_a, &CustomizeDialog::settingsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CustomizeDialog::*)(const BrowserSettings & )>(_a, &CustomizeDialog::settingsColorsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CustomizeDialog::*)(const BrowserSettings & )>(_a, &CustomizeDialog::fontSettingsChanged, 2))
            return;
    }
}

const QMetaObject *CustomizeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomizeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15CustomizeDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CustomizeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void CustomizeDialog::settingsChanged(const BrowserSettings & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void CustomizeDialog::settingsColorsChanged(const BrowserSettings & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void CustomizeDialog::fontSettingsChanged(const BrowserSettings & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
