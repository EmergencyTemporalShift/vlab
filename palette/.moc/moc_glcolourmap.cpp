/****************************************************************************
** Meta object code from reading C++ file 'glcolourmap.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glcolourmap.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glcolourmap.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11GLColourMapE_t {};
} // unnamed namespace

template <> constexpr inline auto GLColourMap::qt_create_metaobjectdata<qt_meta_tag_ZN11GLColourMapE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GLColourMap",
        "CONFIRM",
        "",
        "closeEvent",
        "QCloseEvent*",
        "NOTICE",
        "INDEX",
        "myRED",
        "myGREEN",
        "myBLUE",
        "MODIFIED",
        "SLIDERS_ON",
        "SELECT_ON",
        "MAKEPICK",
        "quit",
        "INIT",
        "page*",
        "SAVE_ALL",
        "SAVE",
        "REVERT",
        "updateRED",
        "updateGREEN",
        "updateBLUE",
        "PAGE",
        "ABOUT",
        "COPY",
        "HELP",
        "PASTE",
        "SELECT",
        "SELECTINDEX",
        "SELECTABLE",
        "TUNE",
        "finetuneRED",
        "finetuneGREEN",
        "finetuneBLUE",
        "BRIGHT",
        "modeR",
        "modeG",
        "modeB",
        "modeD",
        "PICK",
        "SHOWPICK",
        "GLfloat*",
        "DONEPICK",
        "INTERPOLATE",
        "CUT",
        "INSERT",
        "ContinuousSavingMode",
        "TriggeredSavingMode",
        "ModeOff",
        "sliderTriggered",
        "sliderMoving"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'CONFIRM'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'closeEvent'
        QtMocHelpers::SignalData<void(QCloseEvent *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'NOTICE'
        QtMocHelpers::SignalData<void(const QString &, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'INDEX'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'myRED'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'myGREEN'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'myBLUE'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'MODIFIED'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'SLIDERS_ON'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'SELECT_ON'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'MAKEPICK'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'quit'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'INIT'
        QtMocHelpers::SlotData<void(page *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'SAVE_ALL'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SAVE'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'REVERT'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateRED'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateGREEN'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'updateBLUE'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'PAGE'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ABOUT'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'COPY'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'HELP'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PASTE'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SELECT'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SELECTINDEX'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'SELECTABLE'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'TUNE'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'finetuneRED'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'finetuneGREEN'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'finetuneBLUE'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'BRIGHT'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'modeR'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeG'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeB'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'modeD'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'PICK'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SHOWPICK'
        QtMocHelpers::SlotData<void(GLfloat *)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 2 },
        }}),
        // Slot 'DONEPICK'
        QtMocHelpers::SlotData<void(GLfloat *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 42, 2 },
        }}),
        // Slot 'INTERPOLATE'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'CUT'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'INSERT'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ContinuousSavingMode'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'TriggeredSavingMode'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ModeOff'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sliderTriggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sliderMoving'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GLColourMap, qt_meta_tag_ZN11GLColourMapE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GLColourMap::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GLColourMapE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GLColourMapE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11GLColourMapE_t>.metaTypes,
    nullptr
} };

void GLColourMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GLColourMap *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->CONFIRM((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->closeEvent((*reinterpret_cast<std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 2: _t->NOTICE((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->INDEX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->myRED((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->myGREEN((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->myBLUE((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->MODIFIED((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->SLIDERS_ON((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->SELECT_ON((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->MAKEPICK(); break;
        case 11: _t->quit(); break;
        case 12: _t->INIT((*reinterpret_cast<std::add_pointer_t<page*>>(_a[1]))); break;
        case 13: _t->SAVE_ALL(); break;
        case 14: _t->SAVE(); break;
        case 15: _t->REVERT(); break;
        case 16: _t->updateRED((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->updateGREEN((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->updateBLUE((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->PAGE((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->closeEvent(); break;
        case 21: _t->ABOUT(); break;
        case 22: _t->COPY(); break;
        case 23: _t->HELP(); break;
        case 24: _t->PASTE(); break;
        case 25: _t->SELECT(); break;
        case 26: _t->SELECTINDEX((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->SELECTABLE(); break;
        case 28: _t->TUNE(); break;
        case 29: _t->finetuneRED((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->finetuneGREEN((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->finetuneBLUE((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->BRIGHT((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->modeR(); break;
        case 34: _t->modeG(); break;
        case 35: _t->modeB(); break;
        case 36: _t->modeD(); break;
        case 37: _t->PICK(); break;
        case 38: _t->SHOWPICK((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 39: _t->DONEPICK((*reinterpret_cast<std::add_pointer_t<GLfloat*>>(_a[1]))); break;
        case 40: _t->INTERPOLATE(); break;
        case 41: _t->CUT(); break;
        case 42: _t->INSERT(); break;
        case 43: _t->ContinuousSavingMode(); break;
        case 44: _t->TriggeredSavingMode(); break;
        case 45: _t->ModeOff(); break;
        case 46: _t->sliderTriggered(); break;
        case 47: _t->sliderMoving(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(const QString & )>(_a, &GLColourMap::CONFIRM, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(QCloseEvent * )>(_a, &GLColourMap::closeEvent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(const QString & , int )>(_a, &GLColourMap::NOTICE, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(int )>(_a, &GLColourMap::INDEX, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(int )>(_a, &GLColourMap::myRED, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(int )>(_a, &GLColourMap::myGREEN, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(int )>(_a, &GLColourMap::myBLUE, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(bool )>(_a, &GLColourMap::MODIFIED, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(bool )>(_a, &GLColourMap::SLIDERS_ON, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)(bool )>(_a, &GLColourMap::SELECT_ON, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)()>(_a, &GLColourMap::MAKEPICK, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (GLColourMap::*)()>(_a, &GLColourMap::quit, 11))
            return;
    }
}

const QMetaObject *GLColourMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLColourMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GLColourMapE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLColourMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void GLColourMap::CONFIRM(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GLColourMap::closeEvent(QCloseEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GLColourMap::NOTICE(const QString & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void GLColourMap::INDEX(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void GLColourMap::myRED(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void GLColourMap::myGREEN(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void GLColourMap::myBLUE(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void GLColourMap::MODIFIED(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void GLColourMap::SLIDERS_ON(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void GLColourMap::SELECT_ON(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void GLColourMap::MAKEPICK()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GLColourMap::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
namespace {
struct qt_meta_tag_ZN11ColourTunerE_t {};
} // unnamed namespace

template <> constexpr inline auto ColourTuner::qt_create_metaobjectdata<qt_meta_tag_ZN11ColourTunerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColourTuner",
        "SELECTABLE",
        "",
        "DISRED",
        "DISGRE",
        "DISBLU",
        "DISBRI"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'SELECTABLE'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'DISRED'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'DISGRE'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'DISBLU'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'DISBRI'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColourTuner, qt_meta_tag_ZN11ColourTunerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColourTuner::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourTunerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourTunerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ColourTunerE_t>.metaTypes,
    nullptr
} };

void ColourTuner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColourTuner *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SELECTABLE(); break;
        case 1: _t->DISRED((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->DISGRE((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->DISBLU((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->DISBRI((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColourTuner::*)()>(_a, &ColourTuner::SELECTABLE, 0))
            return;
    }
}

const QMetaObject *ColourTuner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColourTuner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ColourTunerE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ColourTuner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ColourTuner::SELECTABLE()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
