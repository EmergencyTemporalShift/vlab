/****************************************************************************
** Meta object code from reading C++ file 'TextureEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TextureEditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextureEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13TextureEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto TextureEditor::qt_create_metaobjectdata<qt_meta_tag_ZN13TextureEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextureEditor",
        "canUndo",
        "",
        "canRedo",
        "canRevert",
        "sendTexture",
        "QImage",
        "textureLoaded",
        "string",
        "currentOpenFile",
        "continuousSave",
        "getImageSize",
        "width",
        "height",
        "rotateCW",
        "rotateCCW",
        "flipH",
        "flipV"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'canUndo'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'canRedo'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'canRevert'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'sendTexture'
        QtMocHelpers::SignalData<void(QImage)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'textureLoaded'
        QtMocHelpers::SignalData<void(string)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'currentOpenFile'
        QtMocHelpers::SignalData<void(string)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'continuousSave'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getImageSize'
        QtMocHelpers::SlotData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Slot 'rotateCW'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rotateCCW'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'flipH'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'flipV'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextureEditor, qt_meta_tag_ZN13TextureEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextureEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13TextureEditorE_t>.metaTypes,
    nullptr
} };

void TextureEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextureEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->canUndo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->canRedo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->canRevert((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->sendTexture((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 4: _t->textureLoaded((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 5: _t->currentOpenFile((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 6: _t->continuousSave(); break;
        case 7: _t->getImageSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->rotateCW(); break;
        case 9: _t->rotateCCW(); break;
        case 10: _t->flipH(); break;
        case 11: _t->flipV(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(bool )>(_a, &TextureEditor::canUndo, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(bool )>(_a, &TextureEditor::canRedo, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(bool )>(_a, &TextureEditor::canRevert, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(QImage )>(_a, &TextureEditor::sendTexture, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(string )>(_a, &TextureEditor::textureLoaded, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)(string )>(_a, &TextureEditor::currentOpenFile, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureEditor::*)()>(_a, &TextureEditor::continuousSave, 6))
            return;
    }
}

const QMetaObject *TextureEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureEditorE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int TextureEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TextureEditor::canUndo(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TextureEditor::canRedo(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TextureEditor::canRevert(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TextureEditor::sendTexture(QImage _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TextureEditor::textureLoaded(string _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TextureEditor::currentOpenFile(string _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void TextureEditor::continuousSave()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
