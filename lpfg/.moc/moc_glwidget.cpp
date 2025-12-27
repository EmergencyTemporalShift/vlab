/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8GLWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto GLWidget::qt_create_metaobjectdata<qt_meta_tag_ZN8GLWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GLWidget",
        "mouseClicked",
        "",
        "QPoint",
        "mouseMoved",
        "mouseReleased",
        "save",
        "updateFilename",
        "OverwriteDialogBox",
        "const char*",
        "sfilename",
        "saveAs",
        "Animate",
        "OutputRGB",
        "OutputPovray",
        "frameNumber",
        "FolderName",
        "OutputRayshade",
        "OutputView",
        "OutputObj",
        "OutputPostscript",
        "std::string",
        "Step",
        "Run",
        "Pause",
        "getAlphaChannel",
        "getPQ",
        "keyPressEvent",
        "QKeyEvent*",
        "keyReleaseEvent",
        "handleButtonPress"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mouseClicked'
        QtMocHelpers::SignalData<void(const QPoint &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'mouseMoved'
        QtMocHelpers::SignalData<void(const QPoint &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'mouseReleased'
        QtMocHelpers::SignalData<void(const QPoint &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateFilename'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OverwriteDialogBox'
        QtMocHelpers::SlotData<bool(const char *)>(8, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Animate'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputRGB'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputPovray'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputPovray'
        QtMocHelpers::SlotData<void(int) const>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'OutputPovray'
        QtMocHelpers::SlotData<void(const char *) const>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 16 },
        }}),
        // Slot 'OutputRayshade'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputView'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputObj'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputPostscript'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OutputView'
        QtMocHelpers::SlotData<void(const std::string &) const>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 2 },
        }}),
        // Slot 'Step'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Run'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Pause'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getAlphaChannel'
        QtMocHelpers::SlotData<bool()>(25, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getPQ'
        QtMocHelpers::SlotData<void *()>(26, 2, QMC::AccessPublic, QMetaType::VoidStar),
        // Slot 'keyPressEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 2 },
        }}),
        // Slot 'keyReleaseEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 2 },
        }}),
        // Slot 'handleButtonPress'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GLWidget, qt_meta_tag_ZN8GLWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8GLWidgetE_t>.metaTypes,
    nullptr
} };

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GLWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mouseClicked((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->save(); break;
        case 4: _t->updateFilename(); break;
        case 5: { bool _r = _t->OverwriteDialogBox((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->saveAs(); break;
        case 7: _t->Animate(); break;
        case 8: _t->OutputRGB(); break;
        case 9: _t->OutputPovray(); break;
        case 10: _t->OutputPovray((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->OutputPovray((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 12: _t->OutputRayshade(); break;
        case 13: _t->OutputView(); break;
        case 14: _t->OutputObj(); break;
        case 15: _t->OutputPostscript(); break;
        case 16: _t->OutputView((*reinterpret_cast<std::add_pointer_t<std::string>>(_a[1]))); break;
        case 17: _t->Step(); break;
        case 18: _t->Run(); break;
        case 19: _t->Pause(); break;
        case 20: { bool _r = _t->getAlphaChannel();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { void* _r = _t->getPQ();
            if (_a[0]) *reinterpret_cast<void**>(_a[0]) = std::move(_r); }  break;
        case 22: _t->keyPressEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 23: _t->keyReleaseEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 24: _t->handleButtonPress(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GLWidget::*)(const QPoint & )>(_a, &GLWidget::mouseClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLWidget::*)(const QPoint & )>(_a, &GLWidget::mouseMoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLWidget::*)(const QPoint & )>(_a, &GLWidget::mouseReleased, 2))
            return;
    }
}

const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GLWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::mouseClicked(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GLWidget::mouseMoved(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GLWidget::mouseReleased(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
