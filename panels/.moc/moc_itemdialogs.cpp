/****************************************************************************
** Meta object code from reading C++ file 'itemdialogs.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../itemdialogs.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemdialogs.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12SliderDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto SliderDialog::qt_create_metaobjectdata<qt_meta_tag_ZN12SliderDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SliderDialog",
        "setSlider",
        "",
        "Slider*",
        "update",
        "setName",
        "setMessage",
        "setValue",
        "setMinValue",
        "setMaxValue",
        "setOriginX",
        "setOriginY",
        "setColour1",
        "GLfloat*",
        "setColour2",
        "colour1ButtonClicked",
        "colour2ButtonClicked",
        "colour1SelectedFromDialog",
        "QColor",
        "colour2SelectedFromDialog",
        "colour1RejectedFromDialog",
        "colour2RejectedFromDialog",
        "setTemplateMessage1",
        "setTemplateMessage2"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setSlider'
        QtMocHelpers::SlotData<void(Slider *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setName'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMessage'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setMinValue'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setMaxValue'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginX'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginY'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setColour1'
        QtMocHelpers::SlotData<void(GLfloat *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'setColour2'
        QtMocHelpers::SlotData<void(GLfloat *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'colour1ButtonClicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour2ButtonClicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour1SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 2 },
        }}),
        // Slot 'colour2SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 2 },
        }}),
        // Slot 'colour1RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour2RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTemplateMessage1'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setTemplateMessage2'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SliderDialog, qt_meta_tag_ZN12SliderDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SliderDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SliderDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SliderDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SliderDialogE_t>.metaTypes,
    nullptr
} };

void SliderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SliderDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setSlider((*reinterpret_cast<std::add_pointer_t<Slider*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setName(); break;
        case 3: _t->setMessage(); break;
        case 4: _t->setValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setMinValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setMaxValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setOriginX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setOriginY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setColour1((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 10: _t->setColour2((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 11: _t->colour1ButtonClicked(); break;
        case 12: _t->colour2ButtonClicked(); break;
        case 13: _t->colour1SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 14: _t->colour2SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 15: _t->colour1RejectedFromDialog(); break;
        case 16: _t->colour2RejectedFromDialog(); break;
        case 17: _t->setTemplateMessage1((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setTemplateMessage2((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SliderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SliderDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SliderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN12ButtonDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ButtonDialog::qt_create_metaobjectdata<qt_meta_tag_ZN12ButtonDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ButtonDialog",
        "setButton",
        "",
        "Button*",
        "update",
        "setName",
        "setMessage",
        "setValue",
        "QListWidgetItem*",
        "setOriginX",
        "setOriginY",
        "setClear",
        "setTemplateMessage1",
        "setTemplateMessage2",
        "setColour1",
        "GLfloat*",
        "setColour2",
        "setColour3",
        "colour1ButtonClicked",
        "colour2ButtonClicked",
        "colour3ButtonClicked",
        "colour1SelectedFromDialog",
        "QColor",
        "colour2SelectedFromDialog",
        "colour3SelectedFromDialog",
        "colour1RejectedFromDialog",
        "colour2RejectedFromDialog",
        "colour3RejectedFromDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setButton'
        QtMocHelpers::SlotData<void(Button *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setName'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMessage'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'setOriginX'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginY'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setClear'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setTemplateMessage1'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setTemplateMessage2'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setColour1'
        QtMocHelpers::SlotData<void(GLfloat *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'setColour2'
        QtMocHelpers::SlotData<void(GLfloat *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'setColour3'
        QtMocHelpers::SlotData<void(GLfloat *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'colour1ButtonClicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colour2ButtonClicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colour3ButtonClicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colour1SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 2 },
        }}),
        // Slot 'colour2SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 2 },
        }}),
        // Slot 'colour3SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 2 },
        }}),
        // Slot 'colour1RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colour2RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colour3RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ButtonDialog, qt_meta_tag_ZN12ButtonDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ButtonDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ButtonDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ButtonDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ButtonDialogE_t>.metaTypes,
    nullptr
} };

void ButtonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ButtonDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setButton((*reinterpret_cast<std::add_pointer_t<Button*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setName(); break;
        case 3: _t->setMessage(); break;
        case 4: _t->setValue((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 5: _t->setOriginX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setOriginY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setClear((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setTemplateMessage1((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setTemplateMessage2((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setColour1((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 11: _t->setColour2((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 12: _t->setColour3((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 13: _t->colour1ButtonClicked(); break;
        case 14: _t->colour2ButtonClicked(); break;
        case 15: _t->colour3ButtonClicked(); break;
        case 16: _t->colour1SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 17: _t->colour2SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 18: _t->colour3SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 19: _t->colour1RejectedFromDialog(); break;
        case 20: _t->colour2RejectedFromDialog(); break;
        case 21: _t->colour3RejectedFromDialog(); break;
        default: ;
        }
    }
}

const QMetaObject *ButtonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ButtonDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ButtonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11LabelDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto LabelDialog::qt_create_metaobjectdata<qt_meta_tag_ZN11LabelDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LabelDialog",
        "setLabel",
        "",
        "Label*",
        "update",
        "setName",
        "setOriginX",
        "setOriginY",
        "setColour1",
        "GLfloat*",
        "colour1ButtonClicked",
        "colour1SelectedFromDialog",
        "QColor",
        "colour1RejectedFromDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setLabel'
        QtMocHelpers::SlotData<void(Label *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setName'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOriginX'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginY'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setColour1'
        QtMocHelpers::SlotData<void(GLfloat *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'colour1ButtonClicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour1SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'colour1RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LabelDialog, qt_meta_tag_ZN11LabelDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LabelDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11LabelDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11LabelDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11LabelDialogE_t>.metaTypes,
    nullptr
} };

void LabelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LabelDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setLabel((*reinterpret_cast<std::add_pointer_t<Label*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setName(); break;
        case 3: _t->setOriginX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setOriginY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setColour1((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 6: _t->colour1ButtonClicked(); break;
        case 7: _t->colour1SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 8: _t->colour1RejectedFromDialog(); break;
        default: ;
        }
    }
}

const QMetaObject *LabelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11LabelDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LabelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11GroupDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto GroupDialog::qt_create_metaobjectdata<qt_meta_tag_ZN11GroupDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GroupDialog",
        "setGroup",
        "",
        "Group*",
        "update",
        "setOriginX",
        "setOriginY",
        "setColour1",
        "GLfloat*",
        "colour1ButtonClicked",
        "colour1SelectedFromDialog",
        "QColor",
        "colour1RejectedFromDialog",
        "removeSelect"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setGroup'
        QtMocHelpers::SlotData<void(Group *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOriginX'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginY'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setColour1'
        QtMocHelpers::SlotData<void(GLfloat *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'colour1ButtonClicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour1SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'colour1RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'removeSelect'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GroupDialog, qt_meta_tag_ZN11GroupDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GroupDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GroupDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GroupDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11GroupDialogE_t>.metaTypes,
    nullptr
} };

void GroupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GroupDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setGroup((*reinterpret_cast<std::add_pointer_t<Group*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setOriginX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setOriginY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setColour1((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 5: _t->colour1ButtonClicked(); break;
        case 6: _t->colour1SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 7: _t->colour1RejectedFromDialog(); break;
        case 8: _t->removeSelect(); break;
        default: ;
        }
    }
}

const QMetaObject *GroupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GroupDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GroupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN10MenuDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto MenuDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10MenuDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MenuDialog",
        "setMenu",
        "",
        "Menu*",
        "update",
        "setName",
        "setMessage",
        "setTemplateMessage1",
        "setTemplateMessage2"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setMenu'
        QtMocHelpers::SlotData<void(Menu *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setName'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMessage'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setTemplateMessage1'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setTemplateMessage2'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MenuDialog, qt_meta_tag_ZN10MenuDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MenuDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MenuDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MenuDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MenuDialogE_t>.metaTypes,
    nullptr
} };

void MenuDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MenuDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setMenu((*reinterpret_cast<std::add_pointer_t<Menu*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setName(); break;
        case 3: _t->setMessage(); break;
        case 4: _t->setTemplateMessage1((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setTemplateMessage2((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MenuDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MenuDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN10PageDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto PageDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10PageDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PageDialog",
        "setPage",
        "",
        "Page*",
        "update",
        "setName",
        "setMessage",
        "setOriginX",
        "setOriginY",
        "setColour1",
        "GLfloat*",
        "colour1ButtonClicked",
        "colour1SelectedFromDialog",
        "QColor",
        "colour1RejectedFromDialog"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setPage'
        QtMocHelpers::SlotData<void(Page *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setName'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMessage'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOriginX'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setOriginY'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setColour1'
        QtMocHelpers::SlotData<void(GLfloat *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'colour1ButtonClicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'colour1SelectedFromDialog'
        QtMocHelpers::SlotData<void(QColor)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'colour1RejectedFromDialog'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PageDialog, qt_meta_tag_ZN10PageDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PageDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PageDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PageDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10PageDialogE_t>.metaTypes,
    nullptr
} };

void PageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PageDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setPage((*reinterpret_cast<std::add_pointer_t<Page*>>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setName(); break;
        case 3: _t->setMessage(); break;
        case 4: _t->setOriginX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setOriginY((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setColour1((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 7: _t->colour1ButtonClicked(); break;
        case 8: _t->colour1SelectedFromDialog((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: _t->colour1RejectedFromDialog(); break;
        default: ;
        }
    }
}

const QMetaObject *PageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PageDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
