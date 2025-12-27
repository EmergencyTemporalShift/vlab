/****************************************************************************
** Meta object code from reading C++ file 'TextureWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TextureWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextureWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13TextureWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto TextureWindow::qt_create_metaobjectdata<qt_meta_tag_ZN13TextureWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextureWindow",
        "textureEditorClosed",
        "",
        "saved",
        "passTexture",
        "QImage",
        "image",
        "textureLoaded",
        "string",
        "filename",
        "continuousSave",
        "updatingContMode",
        "SavingMode",
        "enableUndo",
        "value",
        "enableRedo",
        "enableRevert",
        "newFile",
        "initEditor",
        "useImage",
        "updateContinuousMode",
        "load",
        "pdfHelp",
        "quickHelp",
        "help",
        "loadProject",
        "save",
        "saveProject",
        "saveAs",
        "saveProjectAs",
        "revert",
        "closeEvent",
        "QCloseEvent*",
        "ce",
        "undo",
        "redo",
        "resizeTexture",
        "capture",
        "reset",
        "preferences",
        "changeBgColour",
        "changeBgDefault",
        "changeBgBlack",
        "changeBgWhite",
        "changePointColour",
        "changePointDefault",
        "changePointRed",
        "changePointGreen",
        "changePointBlack",
        "changePointWhite",
        "changeLineColour",
        "changeLineDefault",
        "changeLineRed",
        "changeLineGreen",
        "changeLineBlack",
        "changeLineWhite",
        "resetColours",
        "showHidePoints",
        "showHideLines",
        "resetView",
        "changePointSize",
        "changeLineWidth",
        "showControlsHelp",
        "showAbout",
        "menuize",
        "QPoint",
        "pos",
        "updateActiveFile",
        "str",
        "readConfig",
        "ContinuousSavingMode",
        "TriggeredSavingMode",
        "ModeOff",
        "ContinuousModeMenu",
        "TriggeredModeMenu",
        "OffModeMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'textureEditorClosed'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'passTexture'
        QtMocHelpers::SignalData<void(QImage)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'textureLoaded'
        QtMocHelpers::SignalData<void(string)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'continuousSave'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updatingContMode'
        QtMocHelpers::SignalData<void(SavingMode)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'enableUndo'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'enableRedo'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'enableRevert'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'newFile'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'initEditor'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'useImage'
        QtMocHelpers::SlotData<void(string)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'useImage'
        QtMocHelpers::SlotData<void(QImage)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'updateContinuousMode'
        QtMocHelpers::SlotData<void(SavingMode)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pdfHelp'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'help'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadProject'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveProject'
        QtMocHelpers::SlotData<bool()>(27, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveProjectAs'
        QtMocHelpers::SlotData<bool()>(29, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'revert'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resizeTexture'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'capture'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'preferences'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeBgColour'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeBgDefault'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeBgBlack'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeBgWhite'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointColour'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointDefault'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointRed'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointGreen'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointBlack'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointWhite'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineColour'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineDefault'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineRed'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineGreen'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineBlack'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineWhite'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetColours'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHidePoints'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'showHideLines'
        QtMocHelpers::SlotData<void(bool)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'resetView'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointSize'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineWidth'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showControlsHelp'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAbout'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'menuize'
        QtMocHelpers::SlotData<void(const QPoint &)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 65, 66 },
        }}),
        // Slot 'updateActiveFile'
        QtMocHelpers::SlotData<void(string)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 68 },
        }}),
        // Slot 'readConfig'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ContinuousSavingMode'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TriggeredSavingMode'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ModeOff'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ContinuousModeMenu'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TriggeredModeMenu'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OffModeMenu'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextureWindow, qt_meta_tag_ZN13TextureWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextureWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13TextureWindowE_t>.metaTypes,
    nullptr
} };

void TextureWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextureWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textureEditorClosed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->passTexture((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 2: _t->textureLoaded((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 3: _t->continuousSave(); break;
        case 4: _t->updatingContMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 5: _t->enableUndo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->enableRedo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->enableRevert((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->newFile(); break;
        case 9: _t->initEditor(); break;
        case 10: _t->useImage((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 11: _t->useImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 12: _t->updateContinuousMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 13: _t->load(); break;
        case 14: _t->pdfHelp(); break;
        case 15: _t->quickHelp(); break;
        case 16: _t->help(); break;
        case 17: _t->loadProject(); break;
        case 18: _t->save(); break;
        case 19: { bool _r = _t->saveProject();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->saveAs(); break;
        case 21: { bool _r = _t->saveProjectAs();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->revert(); break;
        case 23: _t->closeEvent((*reinterpret_cast<std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 24: _t->undo(); break;
        case 25: _t->redo(); break;
        case 26: _t->resizeTexture(); break;
        case 27: _t->capture(); break;
        case 28: _t->reset(); break;
        case 29: _t->preferences(); break;
        case 30: _t->changeBgColour(); break;
        case 31: _t->changeBgDefault(); break;
        case 32: _t->changeBgBlack(); break;
        case 33: _t->changeBgWhite(); break;
        case 34: _t->changePointColour(); break;
        case 35: _t->changePointDefault(); break;
        case 36: _t->changePointRed(); break;
        case 37: _t->changePointGreen(); break;
        case 38: _t->changePointBlack(); break;
        case 39: _t->changePointWhite(); break;
        case 40: _t->changeLineColour(); break;
        case 41: _t->changeLineDefault(); break;
        case 42: _t->changeLineRed(); break;
        case 43: _t->changeLineGreen(); break;
        case 44: _t->changeLineBlack(); break;
        case 45: _t->changeLineWhite(); break;
        case 46: _t->resetColours(); break;
        case 47: _t->showHidePoints((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->showHideLines((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->resetView(); break;
        case 50: _t->changePointSize(); break;
        case 51: _t->changeLineWidth(); break;
        case 52: _t->showControlsHelp(); break;
        case 53: _t->showAbout(); break;
        case 54: _t->menuize((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 55: _t->updateActiveFile((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 56: _t->readConfig(); break;
        case 57: _t->ContinuousSavingMode(); break;
        case 58: _t->TriggeredSavingMode(); break;
        case 59: _t->ModeOff(); break;
        case 60: _t->ContinuousModeMenu(); break;
        case 61: _t->TriggeredModeMenu(); break;
        case 62: _t->OffModeMenu(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextureWindow::*)(bool )>(_a, &TextureWindow::textureEditorClosed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureWindow::*)(QImage )>(_a, &TextureWindow::passTexture, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureWindow::*)(string )>(_a, &TextureWindow::textureLoaded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureWindow::*)()>(_a, &TextureWindow::continuousSave, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TextureWindow::*)(SavingMode )>(_a, &TextureWindow::updatingContMode, 4))
            return;
    }
}

const QMetaObject *TextureWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13TextureWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TextureWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void TextureWindow::textureEditorClosed(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TextureWindow::passTexture(QImage _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TextureWindow::textureLoaded(string _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TextureWindow::continuousSave()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TextureWindow::updatingContMode(SavingMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
