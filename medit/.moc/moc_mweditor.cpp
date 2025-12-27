/****************************************************************************
** Meta object code from reading C++ file 'mweditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mweditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mweditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8MWEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto MWEditor::qt_create_metaobjectdata<qt_meta_tag_ZN8MWEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MWEditor",
        "pickColour",
        "",
        "isEdited",
        "doneEvent",
        "Material",
        "applyEvent",
        "displayMaterial",
        "triggered",
        "edit",
        "ok",
        "cancel",
        "applyM",
        "defaultM",
        "revertM",
        "undoM",
        "selectM",
        "setdefault",
        "updateMaterial",
        "updateAmb",
        "updateDif",
        "updateSpec",
        "updateEm",
        "updateShiny",
        "updateTrans",
        "editAmb",
        "editDif",
        "editSpec",
        "editEm",
        "editShiny",
        "editTrans",
        "editAmbColour",
        "editDifColour",
        "editSpecColour",
        "editEmColour",
        "showPick",
        "GLfloat*",
        "editingYes",
        "editingNo",
        "copycolour",
        "QString&",
        "pastecolour",
        "notify"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pickColour'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'isEdited'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'doneEvent'
        QtMocHelpers::SignalData<void(Material)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'applyEvent'
        QtMocHelpers::SignalData<void(Material)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'displayMaterial'
        QtMocHelpers::SignalData<void(Material)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'triggered'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'edit'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ok'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'applyM'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'defaultM'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'revertM'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'undoM'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectM'
        QtMocHelpers::SlotData<void(int, Material)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 5, 2 },
        }}),
        // Slot 'setdefault'
        QtMocHelpers::SlotData<void(Material)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'updateMaterial'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateAmb'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateDif'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateSpec'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateEm'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateShiny'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateTrans'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'editAmb'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editDif'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSpec'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editEm'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editShiny'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editTrans'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editAmbColour'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editDifColour'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSpecColour'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editEmColour'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showPick'
        QtMocHelpers::SlotData<void(GLfloat *)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 2 },
        }}),
        // Slot 'editingYes'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editingNo'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copycolour'
        QtMocHelpers::SlotData<void(QString &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 2 },
        }}),
        // Slot 'pastecolour'
        QtMocHelpers::SlotData<void(QString &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 2 },
        }}),
        // Slot 'notify'
        QtMocHelpers::SlotData<void(bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MWEditor, qt_meta_tag_ZN8MWEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MWEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8MWEditorE_t>.metaTypes,
    nullptr
} };

void MWEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MWEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pickColour(); break;
        case 1: _t->isEdited((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->doneEvent((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 3: _t->applyEvent((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 4: _t->displayMaterial((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 5: _t->triggered(); break;
        case 6: _t->edit(); break;
        case 7: _t->ok(); break;
        case 8: _t->cancel(); break;
        case 9: _t->applyM(); break;
        case 10: _t->defaultM(); break;
        case 11: _t->revertM(); break;
        case 12: _t->undoM(); break;
        case 13: _t->selectM((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Material>>(_a[2]))); break;
        case 14: _t->setdefault((*reinterpret_cast<std::add_pointer_t<Material>>(_a[1]))); break;
        case 15: _t->updateMaterial(); break;
        case 16: _t->updateAmb((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->updateDif((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->updateSpec((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->updateEm((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->updateShiny((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->updateTrans((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->editAmb(); break;
        case 23: _t->editDif(); break;
        case 24: _t->editSpec(); break;
        case 25: _t->editEm(); break;
        case 26: _t->editShiny(); break;
        case 27: _t->editTrans(); break;
        case 28: _t->editAmbColour(); break;
        case 29: _t->editDifColour(); break;
        case 30: _t->editSpecColour(); break;
        case 31: _t->editEmColour(); break;
        case 32: _t->showPick((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 33: _t->editingYes(); break;
        case 34: _t->editingNo(); break;
        case 35: _t->copycolour((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 36: _t->pastecolour((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 37: _t->notify((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)()>(_a, &MWEditor::pickColour, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)(bool )>(_a, &MWEditor::isEdited, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)(Material )>(_a, &MWEditor::doneEvent, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)(Material )>(_a, &MWEditor::applyEvent, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)(Material )>(_a, &MWEditor::displayMaterial, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MWEditor::*)()>(_a, &MWEditor::triggered, 5))
            return;
    }
}

const QMetaObject *MWEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MWEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8MWEditorE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MWEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void MWEditor::pickColour()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MWEditor::isEdited(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MWEditor::doneEvent(Material _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MWEditor::applyEvent(Material _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MWEditor::displayMaterial(Material _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MWEditor::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
namespace {
struct qt_meta_tag_ZN15MaterialDisplayE_t {};
} // unnamed namespace

template <> constexpr inline auto MaterialDisplay::qt_create_metaobjectdata<qt_meta_tag_ZN15MaterialDisplayE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MaterialDisplay"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MaterialDisplay, qt_meta_tag_ZN15MaterialDisplayE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MaterialDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MaterialDisplayE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MaterialDisplayE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MaterialDisplayE_t>.metaTypes,
    nullptr
} };

void MaterialDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MaterialDisplay *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *MaterialDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MaterialDisplayE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int MaterialDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12ColourSwatchE_t {};
} // unnamed namespace

template <> constexpr inline auto ColourSwatch::qt_create_metaobjectdata<qt_meta_tag_ZN12ColourSwatchE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColourSwatch",
        "edit",
        "",
        "copycolour",
        "QString&",
        "pastecolour",
        "editcol",
        "display",
        "GLfloat*",
        "setDisabled",
        "copy",
        "paste"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'edit'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'copycolour'
        QtMocHelpers::SignalData<void(QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'pastecolour'
        QtMocHelpers::SignalData<void(QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'editcol'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'display'
        QtMocHelpers::SlotData<void(GLfloat *, GLfloat *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 }, { 0x80000000 | 8, 2 },
        }}),
        // Slot 'setDisabled'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColourSwatch, qt_meta_tag_ZN12ColourSwatchE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColourSwatch::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColourSwatchE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColourSwatchE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ColourSwatchE_t>.metaTypes,
    nullptr
} };

void ColourSwatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColourSwatch *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->edit(); break;
        case 1: _t->copycolour((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 2: _t->pastecolour((*reinterpret_cast<std::add_pointer_t<QString&>>(_a[1]))); break;
        case 3: _t->editcol(); break;
        case 4: _t->display((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[2]))); break;
        case 5: _t->setDisabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->copy(); break;
        case 7: _t->paste(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColourSwatch::*)()>(_a, &ColourSwatch::edit, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourSwatch::*)(QString & )>(_a, &ColourSwatch::copycolour, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ColourSwatch::*)(QString & )>(_a, &ColourSwatch::pastecolour, 2))
            return;
    }
}

const QMetaObject *ColourSwatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColourSwatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ColourSwatchE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int ColourSwatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ColourSwatch::edit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColourSwatch::copycolour(QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ColourSwatch::pastecolour(QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
