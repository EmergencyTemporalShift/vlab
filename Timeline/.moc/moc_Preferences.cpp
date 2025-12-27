/****************************************************************************
** Meta object code from reading C++ file 'Preferences.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Preferences.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preferences.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11PreferencesE_t {};
} // unnamed namespace

template <> constexpr inline auto Preferences::qt_create_metaobjectdata<qt_meta_tag_ZN11PreferencesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Preferences",
        "configChanged",
        "",
        "Save",
        "QAbstractButton*",
        "cancel",
        "paste",
        "keyPressEvent",
        "QKeyEvent*",
        "e",
        "pick_selected_color",
        "pick_unselected_color",
        "pick_background_color",
        "pick_backgroundEdit_color",
        "pick_segment_color",
        "pick_grid_color",
        "pick_eventTitle_color",
        "pick_eventLabel_color",
        "pick_gridLabel_color",
        "setButtonColor",
        "QPushButton*",
        "QColor",
        "setSpinBox",
        "QSpinBox*",
        "spinBox",
        "value",
        "setButton_selected_color",
        "color",
        "setButton_unselected_color",
        "setButton_background_color",
        "setButton_backgroundEdit_color",
        "setButton_segment_color",
        "setButton_grid_color",
        "setButton_eventTitle_color",
        "setButton_eventLabel_color",
        "setButton_gridLabel_color",
        "resetButton_selected_color",
        "resetButton_unselected_color",
        "resetButton_background_color",
        "resetButton_backgroundEdit_color",
        "resetButton_segment_color",
        "resetButton_grid_color",
        "resetButton_eventTitle_color",
        "resetButton_eventLabel_color",
        "resetButton_gridLabel_color",
        "set_SegmentWidth",
        "set_pointSize",
        "set_yOffset",
        "set_startEndYOffset",
        "set_labelYoffset",
        "setFont",
        "QFont",
        "font",
        "resetFont",
        "font_cb",
        "get_background_color",
        "get_backgroundEdit_color",
        "get_unselected_color",
        "get_segment_color",
        "get_grid_color",
        "get_selected_color",
        "get_eventTitle_color",
        "get_eventLabel_color",
        "get_gridLabel_color",
        "get_labelYoffset",
        "get_startEndYOffset",
        "get_yOffset",
        "get_segmentWidth",
        "get_font",
        "std::string",
        "get_fontSize",
        "get_pointSize"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'configChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Save'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'Save'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'keyPressEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'pick_selected_color'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_unselected_color'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_background_color'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_backgroundEdit_color'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_segment_color'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_grid_color'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_eventTitle_color'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_eventLabel_color'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pick_gridLabel_color'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setButtonColor'
        QtMocHelpers::SlotData<void(QPushButton *, const QColor &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 2 }, { 0x80000000 | 21, 2 },
        }}),
        // Slot 'setSpinBox'
        QtMocHelpers::SlotData<void(QSpinBox *, int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 }, { QMetaType::Int, 25 },
        }}),
        // Slot 'setButton_selected_color'
        QtMocHelpers::SlotData<void(const QColor &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_unselected_color'
        QtMocHelpers::SlotData<void(const QColor &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_background_color'
        QtMocHelpers::SlotData<void(const QColor &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_backgroundEdit_color'
        QtMocHelpers::SlotData<void(const QColor &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_segment_color'
        QtMocHelpers::SlotData<void(const QColor &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_grid_color'
        QtMocHelpers::SlotData<void(const QColor &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_eventTitle_color'
        QtMocHelpers::SlotData<void(const QColor &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_eventLabel_color'
        QtMocHelpers::SlotData<void(const QColor &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'setButton_gridLabel_color'
        QtMocHelpers::SlotData<void(const QColor &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 27 },
        }}),
        // Slot 'resetButton_selected_color'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_unselected_color'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_background_color'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_backgroundEdit_color'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_segment_color'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_grid_color'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_eventTitle_color'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_eventLabel_color'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetButton_gridLabel_color'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'set_SegmentWidth'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'set_pointSize'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'set_yOffset'
        QtMocHelpers::SlotData<void(int)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'set_startEndYOffset'
        QtMocHelpers::SlotData<void(int)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'set_labelYoffset'
        QtMocHelpers::SlotData<void(int)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'setFont'
        QtMocHelpers::SlotData<void(QFont)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 52 },
        }}),
        // Slot 'resetFont'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'font_cb'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'get_background_color'
        QtMocHelpers::SlotData<QColor()>(55, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_backgroundEdit_color'
        QtMocHelpers::SlotData<QColor()>(56, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_unselected_color'
        QtMocHelpers::SlotData<QColor()>(57, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_segment_color'
        QtMocHelpers::SlotData<QColor()>(58, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_grid_color'
        QtMocHelpers::SlotData<QColor()>(59, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_selected_color'
        QtMocHelpers::SlotData<QColor()>(60, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_eventTitle_color'
        QtMocHelpers::SlotData<QColor()>(61, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_eventLabel_color'
        QtMocHelpers::SlotData<QColor()>(62, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_gridLabel_color'
        QtMocHelpers::SlotData<QColor()>(63, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'get_labelYoffset'
        QtMocHelpers::SlotData<int()>(64, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'get_startEndYOffset'
        QtMocHelpers::SlotData<int()>(65, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'get_yOffset'
        QtMocHelpers::SlotData<int()>(66, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'get_segmentWidth'
        QtMocHelpers::SlotData<int()>(67, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'get_font'
        QtMocHelpers::SlotData<std::string()>(68, 2, QMC::AccessPublic, 0x80000000 | 69),
        // Slot 'get_fontSize'
        QtMocHelpers::SlotData<int()>(70, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'get_pointSize'
        QtMocHelpers::SlotData<int()>(71, 2, QMC::AccessPublic, QMetaType::Int),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Preferences, qt_meta_tag_ZN11PreferencesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Preferences::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PreferencesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PreferencesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11PreferencesE_t>.metaTypes,
    nullptr
} };

void Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Preferences *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->Save((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 2: _t->Save((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->cancel(); break;
        case 4: _t->paste(); break;
        case 5: _t->keyPressEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 6: _t->pick_selected_color(); break;
        case 7: _t->pick_unselected_color(); break;
        case 8: _t->pick_background_color(); break;
        case 9: _t->pick_backgroundEdit_color(); break;
        case 10: _t->pick_segment_color(); break;
        case 11: _t->pick_grid_color(); break;
        case 12: _t->pick_eventTitle_color(); break;
        case 13: _t->pick_eventLabel_color(); break;
        case 14: _t->pick_gridLabel_color(); break;
        case 15: _t->setButtonColor((*reinterpret_cast<std::add_pointer_t<QPushButton*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 16: _t->setSpinBox((*reinterpret_cast<std::add_pointer_t<QSpinBox*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->setButton_selected_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 18: _t->setButton_unselected_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 19: _t->setButton_background_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 20: _t->setButton_backgroundEdit_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 21: _t->setButton_segment_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 22: _t->setButton_grid_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 23: _t->setButton_eventTitle_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 24: _t->setButton_eventLabel_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 25: _t->setButton_gridLabel_color((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 26: _t->resetButton_selected_color(); break;
        case 27: _t->resetButton_unselected_color(); break;
        case 28: _t->resetButton_background_color(); break;
        case 29: _t->resetButton_backgroundEdit_color(); break;
        case 30: _t->resetButton_segment_color(); break;
        case 31: _t->resetButton_grid_color(); break;
        case 32: _t->resetButton_eventTitle_color(); break;
        case 33: _t->resetButton_eventLabel_color(); break;
        case 34: _t->resetButton_gridLabel_color(); break;
        case 35: _t->set_SegmentWidth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->set_pointSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->set_yOffset((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->set_startEndYOffset((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->set_labelYoffset((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->setFont((*reinterpret_cast<std::add_pointer_t<QFont>>(_a[1]))); break;
        case 41: _t->resetFont(); break;
        case 42: _t->font_cb(); break;
        case 43: { QColor _r = _t->get_background_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 44: { QColor _r = _t->get_backgroundEdit_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 45: { QColor _r = _t->get_unselected_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 46: { QColor _r = _t->get_segment_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 47: { QColor _r = _t->get_grid_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 48: { QColor _r = _t->get_selected_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 49: { QColor _r = _t->get_eventTitle_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 50: { QColor _r = _t->get_eventLabel_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 51: { QColor _r = _t->get_gridLabel_color();
            if (_a[0]) *reinterpret_cast<QColor*>(_a[0]) = std::move(_r); }  break;
        case 52: { int _r = _t->get_labelYoffset();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 53: { int _r = _t->get_startEndYOffset();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 54: { int _r = _t->get_yOffset();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 55: { int _r = _t->get_segmentWidth();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 56: { std::string _r = _t->get_font();
            if (_a[0]) *reinterpret_cast<std::string*>(_a[0]) = std::move(_r); }  break;
        case 57: { int _r = _t->get_fontSize();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 58: { int _r = _t->get_pointSize();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Preferences::*)()>(_a, &Preferences::configChanged, 0))
            return;
    }
}

const QMetaObject *Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PreferencesE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_Preferences"))
        return static_cast< Ui_Preferences*>(this);
    return QDialog::qt_metacast(_clname);
}

int Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 59;
    }
    return _id;
}

// SIGNAL 0
void Preferences::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
