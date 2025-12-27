/****************************************************************************
** Meta object code from reading C++ file 'BezierWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BezierWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BezierWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12BezierWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto BezierWindow::qt_create_metaobjectdata<qt_meta_tag_ZN12BezierWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BezierWindow",
        "continuousSave",
        "",
        "updatingContMode",
        "SavingMode",
        "setContactCentered",
        "value",
        "enableUndo",
        "enableRedo",
        "enableRevert",
        "updateContinuousMode",
        "pdfHelp",
        "quickHelp",
        "help",
        "newFile",
        "loadTexture",
        "loadSurface",
        "saveSurface",
        "saveSurfaceAs",
        "undo",
        "redo",
        "revert",
        "editTexture",
        "textureEditorClosed",
        "saved",
        "closeEvent",
        "QCloseEvent*",
        "ce",
        "changeBgColour",
        "changePointColour",
        "changeSelectedPointColour",
        "changeLineColour",
        "changeWireframeColour",
        "changeVectorColour",
        "changePatchColour",
        "changeSelectedPatchColour",
        "resetColours",
        "showHidePoints",
        "showHideLines",
        "showHideSurface",
        "showHideVectors",
        "resetView",
        "setWireframe",
        "changePointSize",
        "changeLineWidth",
        "changeWireframeWidth",
        "changeSubdivisionLevel",
        "centerCamera",
        "centerAtContact",
        "editTurtleParameters",
        "editAdjacencies",
        "flipPatchHorizontal",
        "flipPatchVertical",
        "flipPatchDepth",
        "translatePatch",
        "rotatePatch",
        "scalePatch",
        "showControlsHelp",
        "showAbout",
        "menuize",
        "QPoint",
        "pos",
        "menuizeAddButton",
        "addPatchToList",
        "string",
        "name",
        "addNewSquarePatch",
        "addNewTrianglePatch",
        "deleteSelectedPatch",
        "duplicateSelectedPatch",
        "clearPatchList",
        "selectPatch",
        "selectPatchInList",
        "index",
        "changePatchName",
        "QListWidgetItem*",
        "item",
        "changePatchVisibility",
        "preferences",
        "readConfig",
        "point1Toggled",
        "checked",
        "point2Toggled",
        "point3Toggled",
        "point4Toggled",
        "point5Toggled",
        "point6Toggled",
        "point7Toggled",
        "point8Toggled",
        "point9Toggled",
        "point10Toggled",
        "point11Toggled",
        "point12Toggled",
        "point13Toggled",
        "point14Toggled",
        "point15Toggled",
        "point16Toggled",
        "contactToggled",
        "resetButtons",
        "button",
        "toggleButton",
        "i",
        "j",
        "toggleContactButton",
        "set14XSymmetry",
        "set14YSymmetry",
        "set113XSymmetry",
        "set113YSymmetry",
        "ContinuousSavingMode",
        "TriggeredSavingMode",
        "ModeOff",
        "ContinuousModeMenu",
        "TriggeredModeMenu",
        "OffModeMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'continuousSave'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updatingContMode'
        QtMocHelpers::SignalData<void(SavingMode)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'setContactCentered'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'enableUndo'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'enableRedo'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'enableRevert'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'updateContinuousMode'
        QtMocHelpers::SlotData<void(SavingMode)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'pdfHelp'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'quickHelp'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'help'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newFile'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadTexture'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSurface'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveSurface'
        QtMocHelpers::SlotData<bool()>(17, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'saveSurfaceAs'
        QtMocHelpers::SlotData<bool()>(18, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'revert'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editTexture'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'textureEditorClosed'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'changeBgColour'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePointColour'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeSelectedPointColour'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineColour'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeWireframeColour'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeVectorColour'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changePatchColour'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeSelectedPatchColour'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetColours'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHidePoints'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'showHideLines'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'showHideSurface'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'showHideVectors'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'resetView'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setWireframe'
        QtMocHelpers::SlotData<void(bool)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'changePointSize'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeLineWidth'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeWireframeWidth'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeSubdivisionLevel'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'centerCamera'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'centerAtContact'
        QtMocHelpers::SlotData<void(bool)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'editTurtleParameters'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editAdjacencies'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'flipPatchHorizontal'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'flipPatchVertical'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'flipPatchDepth'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'translatePatch'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rotatePatch'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'scalePatch'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showControlsHelp'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showAbout'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'menuize'
        QtMocHelpers::SlotData<void(const QPoint &)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 60, 61 },
        }}),
        // Slot 'menuizeAddButton'
        QtMocHelpers::SlotData<void(const QPoint &)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 60, 61 },
        }}),
        // Slot 'addPatchToList'
        QtMocHelpers::SlotData<void(string)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'addNewSquarePatch'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addNewTrianglePatch'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteSelectedPatch'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'duplicateSelectedPatch'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearPatchList'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectPatch'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectPatchInList'
        QtMocHelpers::SlotData<void(int)>(72, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 73 },
        }}),
        // Slot 'changePatchName'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(74, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 75, 76 },
        }}),
        // Slot 'changePatchVisibility'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'preferences'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readConfig'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'point1Toggled'
        QtMocHelpers::SlotData<void(bool)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point2Toggled'
        QtMocHelpers::SlotData<void(bool)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point3Toggled'
        QtMocHelpers::SlotData<void(bool)>(83, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point4Toggled'
        QtMocHelpers::SlotData<void(bool)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point5Toggled'
        QtMocHelpers::SlotData<void(bool)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point6Toggled'
        QtMocHelpers::SlotData<void(bool)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point7Toggled'
        QtMocHelpers::SlotData<void(bool)>(87, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point8Toggled'
        QtMocHelpers::SlotData<void(bool)>(88, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point9Toggled'
        QtMocHelpers::SlotData<void(bool)>(89, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point10Toggled'
        QtMocHelpers::SlotData<void(bool)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point11Toggled'
        QtMocHelpers::SlotData<void(bool)>(91, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point12Toggled'
        QtMocHelpers::SlotData<void(bool)>(92, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point13Toggled'
        QtMocHelpers::SlotData<void(bool)>(93, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point14Toggled'
        QtMocHelpers::SlotData<void(bool)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point15Toggled'
        QtMocHelpers::SlotData<void(bool)>(95, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'point16Toggled'
        QtMocHelpers::SlotData<void(bool)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'contactToggled'
        QtMocHelpers::SlotData<void(bool)>(97, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'resetButtons'
        QtMocHelpers::SlotData<void(int)>(98, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 99 },
        }}),
        // Slot 'toggleButton'
        QtMocHelpers::SlotData<void(int, int)>(100, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 101 }, { QMetaType::Int, 102 },
        }}),
        // Slot 'toggleContactButton'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'set14XSymmetry'
        QtMocHelpers::SlotData<void(bool)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'set14YSymmetry'
        QtMocHelpers::SlotData<void(bool)>(105, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'set113XSymmetry'
        QtMocHelpers::SlotData<void(bool)>(106, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'set113YSymmetry'
        QtMocHelpers::SlotData<void(bool)>(107, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 81 },
        }}),
        // Slot 'ContinuousSavingMode'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TriggeredSavingMode'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ModeOff'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ContinuousModeMenu'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'TriggeredModeMenu'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OffModeMenu'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BezierWindow, qt_meta_tag_ZN12BezierWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BezierWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12BezierWindowE_t>.metaTypes,
    nullptr
} };

void BezierWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BezierWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->continuousSave(); break;
        case 1: _t->updatingContMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 2: _t->setContactCentered((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->enableUndo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->enableRedo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->enableRevert((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->updateContinuousMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 7: _t->pdfHelp(); break;
        case 8: _t->quickHelp(); break;
        case 9: _t->help(); break;
        case 10: _t->newFile(); break;
        case 11: _t->loadTexture(); break;
        case 12: _t->loadSurface(); break;
        case 13: { bool _r = _t->saveSurface();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->saveSurfaceAs();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->undo(); break;
        case 16: _t->redo(); break;
        case 17: _t->revert(); break;
        case 18: _t->editTexture(); break;
        case 19: _t->textureEditorClosed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->closeEvent((*reinterpret_cast<std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 21: _t->changeBgColour(); break;
        case 22: _t->changePointColour(); break;
        case 23: _t->changeSelectedPointColour(); break;
        case 24: _t->changeLineColour(); break;
        case 25: _t->changeWireframeColour(); break;
        case 26: _t->changeVectorColour(); break;
        case 27: _t->changePatchColour(); break;
        case 28: _t->changeSelectedPatchColour(); break;
        case 29: _t->resetColours(); break;
        case 30: _t->showHidePoints((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->showHideLines((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->showHideSurface((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->showHideVectors((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->resetView(); break;
        case 35: _t->setWireframe((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->changePointSize(); break;
        case 37: _t->changeLineWidth(); break;
        case 38: _t->changeWireframeWidth(); break;
        case 39: _t->changeSubdivisionLevel(); break;
        case 40: _t->centerCamera(); break;
        case 41: _t->centerAtContact((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->editTurtleParameters(); break;
        case 43: _t->editAdjacencies(); break;
        case 44: _t->flipPatchHorizontal(); break;
        case 45: _t->flipPatchVertical(); break;
        case 46: _t->flipPatchDepth(); break;
        case 47: _t->translatePatch(); break;
        case 48: _t->rotatePatch(); break;
        case 49: _t->scalePatch(); break;
        case 50: _t->showControlsHelp(); break;
        case 51: _t->showAbout(); break;
        case 52: _t->menuize((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 53: _t->menuizeAddButton((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 54: _t->addPatchToList((*reinterpret_cast<std::add_pointer_t<string>>(_a[1]))); break;
        case 55: _t->addNewSquarePatch(); break;
        case 56: _t->addNewTrianglePatch(); break;
        case 57: _t->deleteSelectedPatch(); break;
        case 58: _t->duplicateSelectedPatch(); break;
        case 59: _t->clearPatchList(); break;
        case 60: _t->selectPatch(); break;
        case 61: _t->selectPatchInList((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 62: _t->changePatchName((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 63: _t->changePatchVisibility(); break;
        case 64: _t->preferences(); break;
        case 65: _t->readConfig(); break;
        case 66: _t->point1Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->point2Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 68: _t->point3Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 69: _t->point4Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 70: _t->point5Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 71: _t->point6Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 72: _t->point7Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 73: _t->point8Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 74: _t->point9Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->point10Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: _t->point11Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 77: _t->point12Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 78: _t->point13Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 79: _t->point14Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 80: _t->point15Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 81: _t->point16Toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 82: _t->contactToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 83: _t->resetButtons((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 84: _t->toggleButton((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 85: _t->toggleContactButton(); break;
        case 86: _t->set14XSymmetry((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 87: _t->set14YSymmetry((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 88: _t->set113XSymmetry((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 89: _t->set113YSymmetry((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 90: _t->ContinuousSavingMode(); break;
        case 91: _t->TriggeredSavingMode(); break;
        case 92: _t->ModeOff(); break;
        case 93: _t->ContinuousModeMenu(); break;
        case 94: _t->TriggeredModeMenu(); break;
        case 95: _t->OffModeMenu(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BezierWindow::*)()>(_a, &BezierWindow::continuousSave, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BezierWindow::*)(SavingMode )>(_a, &BezierWindow::updatingContMode, 1))
            return;
    }
}

const QMetaObject *BezierWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BezierWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12BezierWindowE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BezierWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 96;
    }
    return _id;
}

// SIGNAL 0
void BezierWindow::continuousSave()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BezierWindow::updatingContMode(SavingMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
