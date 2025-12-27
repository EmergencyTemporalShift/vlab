/****************************************************************************
** Meta object code from reading C++ file 'timeline.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../timeline.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timeline.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8TimelineE_t {};
} // unnamed namespace

template <> constexpr inline auto Timeline::qt_create_metaobjectdata<qt_meta_tag_ZN8TimelineE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Timeline",
        "nameRightClick",
        "",
        "QMouseEvent*",
        "nameLeftClick",
        "index",
        "eventDoubleClicked",
        "change",
        "loadConfig",
        "createAxis",
        "createEvent",
        "startTime",
        "endTime",
        "startLabel",
        "endLabel",
        "name",
        "color",
        "isPointSelected",
        "getEventIndex",
        "QPoint",
        "isPoint",
        "deleteSelected",
        "deleteEvent",
        "selected",
        "selectPoint",
        "selectAll",
        "deselectPoint",
        "moveSelected",
        "dt",
        "releaseSelected",
        "swapEvents",
        "flag",
        "editEvent",
        "nameClicked",
        "nameLeftClicked",
        "nameRightClicked",
        "createFunceditProcess",
        "fileName",
        "getTmpDir",
        "std::string",
        "setSavingMode",
        "SavingMode",
        "savingMode",
        "resizeEvent",
        "QResizeEvent*",
        "event"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nameRightClick'
        QtMocHelpers::SignalData<void(QMouseEvent *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'nameLeftClick'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'eventDoubleClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'change'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'createAxis'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'createEvent'
        QtMocHelpers::SlotData<void(float, float, const QString &, const QString &, const QString &, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 11 }, { QMetaType::Float, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 },
            { QMetaType::QString, 15 }, { QMetaType::QString, 16 },
        }}),
        // Slot 'isPointSelected'
        QtMocHelpers::SlotData<bool()>(17, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getEventIndex'
        QtMocHelpers::SlotData<int(QPoint)>(18, 2, QMC::AccessPublic, QMetaType::Int, {{
            { 0x80000000 | 19, 2 },
        }}),
        // Slot 'isPoint'
        QtMocHelpers::SlotData<bool()>(20, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'deleteSelected'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteEvent'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'selected'
        QtMocHelpers::SlotData<bool()>(23, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'selectPoint'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deselectPoint'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveSelected'
        QtMocHelpers::SlotData<void(float)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 28 },
        }}),
        // Slot 'releaseSelected'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'swapEvents'
        QtMocHelpers::SlotData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Slot 'editEvent'
        QtMocHelpers::SlotData<void(int, float, float, const QString &, const QString &, const QString &, const QString &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Float, 11 }, { QMetaType::Float, 12 }, { QMetaType::QString, 13 },
            { QMetaType::QString, 14 }, { QMetaType::QString, 15 }, { QMetaType::QString, 16 },
        }}),
        // Slot 'nameClicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nameLeftClicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nameRightClicked'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'createFunceditProcess'
        QtMocHelpers::SlotData<void(QString)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 37 },
        }}),
        // Slot 'getTmpDir'
        QtMocHelpers::SlotData<std::string()>(38, 2, QMC::AccessPublic, 0x80000000 | 39),
        // Slot 'setSavingMode'
        QtMocHelpers::SlotData<void(SavingMode)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'resizeEvent'
        QtMocHelpers::SlotData<void(QResizeEvent *)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 44, 45 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Timeline, qt_meta_tag_ZN8TimelineE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Timeline::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TimelineE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TimelineE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8TimelineE_t>.metaTypes,
    nullptr
} };

void Timeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Timeline *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nameRightClick((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->nameLeftClick((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->eventDoubleClicked(); break;
        case 3: _t->change(); break;
        case 4: _t->loadConfig(); break;
        case 5: _t->createAxis(); break;
        case 6: _t->createEvent((*reinterpret_cast<std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6]))); break;
        case 7: { bool _r = _t->isPointSelected();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->getEventIndex((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isPoint();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->deleteSelected(); break;
        case 11: _t->deleteEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: { bool _r = _t->selected();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->selectPoint(); break;
        case 14: _t->selectAll(); break;
        case 15: _t->deselectPoint(); break;
        case 16: _t->moveSelected((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 17: _t->releaseSelected(); break;
        case 18: _t->swapEvents((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->editEvent((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[7]))); break;
        case 20: _t->nameClicked(); break;
        case 21: _t->nameLeftClicked(); break;
        case 22: _t->nameRightClicked((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 23: _t->createFunceditProcess((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: { std::string _r = _t->getTmpDir();
            if (_a[0]) *reinterpret_cast<std::string*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setSavingMode((*reinterpret_cast<std::add_pointer_t<SavingMode>>(_a[1]))); break;
        case 26: _t->resizeEvent((*reinterpret_cast<std::add_pointer_t<QResizeEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)(QMouseEvent * )>(_a, &Timeline::nameRightClick, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)(int )>(_a, &Timeline::nameLeftClick, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)()>(_a, &Timeline::eventDoubleClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)()>(_a, &Timeline::change, 3))
            return;
    }
}

const QMetaObject *Timeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Timeline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TimelineE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Timeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Timeline::nameRightClick(QMouseEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Timeline::nameLeftClick(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Timeline::eventDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Timeline::change()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
