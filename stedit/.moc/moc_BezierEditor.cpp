/****************************************************************************
** Meta object code from reading C++ file 'BezierEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BezierEditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BezierEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12BezierEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto BezierEditor::qt_create_metaobjectdata<qt_meta_tag_ZN12BezierEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BezierEditor",
        "selectedPointX",
        "",
        "x",
        "selectedPointY",
        "y",
        "selectedPointZ",
        "z",
        "pointSelected",
        "i",
        "j",
        "contactPointSelected",
        "contactCenteredChanged",
        "value",
        "canUndo",
        "canRedo",
        "canRevert",
        "addPatchToList",
        "string",
        "name",
        "newSurface",
        "updatePatchSelection",
        "index",
        "updateContactPoint",
        "Point",
        "point",
        "continuousSave",
        "selectPoint",
        "jndex",
        "selectContactPoint",
        "saveXYZValue",
        "setXValue",
        "setYValue",
        "setZValue",
        "undo",
        "redo",
        "updateTexture",
        "QImage",
        "image",
        "updateTextureName",
        "filename",
        "setSymmetricalEditing",
        "axis14",
        "axisX",
        "setContactPoint",
        "setEndPoint",
        "setHeading",
        "Vector3",
        "vector",
        "setUp",
        "setSize",
        "translate",
        "translation",
        "rotate",
        "axis",
        "angle",
        "scale",
        "factor",
        "setRotationLocked",
        "boxEdited",
        "setEnforceAdjacency",
        "updateAdjacencies",
        "rotateTextureCW",
        "rotateTextureCCW",
        "flipTextureH",
        "flipTextureV"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectedPointX'
        QtMocHelpers::SignalData<void(double)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 },
        }}),
        // Signal 'selectedPointY'
        QtMocHelpers::SignalData<void(double)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 5 },
        }}),
        // Signal 'selectedPointZ'
        QtMocHelpers::SignalData<void(double)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 7 },
        }}),
        // Signal 'pointSelected'
        QtMocHelpers::SignalData<void(int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::Int, 10 },
        }}),
        // Signal 'contactPointSelected'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contactCenteredChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'canUndo'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'canRedo'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'canRevert'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'addPatchToList'
        QtMocHelpers::SignalData<void(string)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'newSurface'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updatePatchSelection'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'updateContactPoint'
        QtMocHelpers::SignalData<void(Point)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Signal 'continuousSave'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectPoint'
        QtMocHelpers::SlotData<void(int, int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 }, { QMetaType::Int, 28 },
        }}),
        // Slot 'selectContactPoint'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveXYZValue'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setXValue'
        QtMocHelpers::SlotData<void(double)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 },
        }}),
        // Slot 'setYValue'
        QtMocHelpers::SlotData<void(double)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 },
        }}),
        // Slot 'setZValue'
        QtMocHelpers::SlotData<void(double)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 },
        }}),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateTexture'
        QtMocHelpers::SlotData<void(QImage)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Slot 'updateTextureName'
        QtMocHelpers::SlotData<void(string)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 40 },
        }}),
        // Slot 'setSymmetricalEditing'
        QtMocHelpers::SlotData<void(bool, bool, bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 42 }, { QMetaType::Bool, 43 }, { QMetaType::Bool, 13 },
        }}),
        // Slot 'setContactPoint'
        QtMocHelpers::SlotData<void(Point)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'setEndPoint'
        QtMocHelpers::SlotData<void(Point)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'setHeading'
        QtMocHelpers::SlotData<void(Vector3)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 48 },
        }}),
        // Slot 'setUp'
        QtMocHelpers::SlotData<void(Vector3)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 48 },
        }}),
        // Slot 'setSize'
        QtMocHelpers::SlotData<void(double)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 },
        }}),
        // Slot 'translate'
        QtMocHelpers::SlotData<void(Vector3)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 52 },
        }}),
        // Slot 'rotate'
        QtMocHelpers::SlotData<void(Vector3, double)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 54 }, { QMetaType::Double, 55 },
        }}),
        // Slot 'scale'
        QtMocHelpers::SlotData<void(Vector3)>(56, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 47, 57 },
        }}),
        // Slot 'setRotationLocked'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'boxEdited'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setEnforceAdjacency'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'updateAdjacencies'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rotateTextureCW'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rotateTextureCCW'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'flipTextureH'
        QtMocHelpers::SlotData<void(bool)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'flipTextureV'
        QtMocHelpers::SlotData<void(bool)>(65, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BezierEditor, qt_meta_tag_ZN12BezierEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BezierEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12BezierEditorE_t>.metaTypes,
    nullptr
} };

void BezierEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BezierEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedPointX((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->selectedPointY((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->selectedPointZ((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->pointSelected((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->contactPointSelected(); break;
        case 5: _t->contactCenteredChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->canUndo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->canRedo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->canRevert((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->addPatchToList((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 10: _t->newSurface(); break;
        case 11: _t->updatePatchSelection((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateContactPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 13: _t->continuousSave(); break;
        case 14: _t->selectPoint((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->selectContactPoint(); break;
        case 16: _t->saveXYZValue(); break;
        case 17: _t->setXValue((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->setYValue((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->setZValue((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->undo(); break;
        case 21: _t->redo(); break;
        case 22: _t->updateTexture((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 23: _t->updateTextureName((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 24: _t->setSymmetricalEditing((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 25: _t->setContactPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 26: _t->setEndPoint((*reinterpret_cast<std::add_pointer_t<Point>>(_a[1]))); break;
        case 27: _t->setHeading((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 28: _t->setUp((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 29: _t->setSize((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->translate((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 31: _t->rotate((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2]))); break;
        case 32: _t->scale((*reinterpret_cast<std::add_pointer_t<Vector3>>(_a[1]))); break;
        case 33: _t->setRotationLocked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->boxEdited(); break;
        case 35: _t->setEnforceAdjacency((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->updateAdjacencies(); break;
        case 37: _t->rotateTextureCW(); break;
        case 38: _t->rotateTextureCCW(); break;
        case 39: _t->flipTextureH((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 40: _t->flipTextureV((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(double )>(_a, &BezierEditor::selectedPointX, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(double )>(_a, &BezierEditor::selectedPointY, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(double )>(_a, &BezierEditor::selectedPointZ, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(int , int )>(_a, &BezierEditor::pointSelected, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)()>(_a, &BezierEditor::contactPointSelected, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(bool )>(_a, &BezierEditor::contactCenteredChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(bool )>(_a, &BezierEditor::canUndo, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(bool )>(_a, &BezierEditor::canRedo, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(bool )>(_a, &BezierEditor::canRevert, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(string )>(_a, &BezierEditor::addPatchToList, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)()>(_a, &BezierEditor::newSurface, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(int )>(_a, &BezierEditor::updatePatchSelection, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)(Point )>(_a, &BezierEditor::updateContactPoint, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierEditor::*)()>(_a, &BezierEditor::continuousSave, 13))
            return;
    }
}

const QMetaObject *BezierEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BezierEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierEditorE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int BezierEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void BezierEditor::selectedPointX(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void BezierEditor::selectedPointY(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void BezierEditor::selectedPointZ(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void BezierEditor::pointSelected(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void BezierEditor::contactPointSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BezierEditor::contactCenteredChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void BezierEditor::canUndo(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void BezierEditor::canRedo(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void BezierEditor::canRevert(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void BezierEditor::addPatchToList(string _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void BezierEditor::newSurface()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void BezierEditor::updatePatchSelection(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void BezierEditor::updateContactPoint(Point _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void BezierEditor::continuousSave()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
