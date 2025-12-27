/****************************************************************************
** Meta object code from reading C++ file 'SaveAs.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SaveAs.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SaveAs.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6SaveAsE_t {};
} // unnamed namespace

template <> constexpr inline auto SaveAs::qt_create_metaobjectdata<qt_meta_tag_ZN6SaveAsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SaveAs",
        "setPaths",
        "",
        "setFormat",
        "setNumbering",
        "b",
        "setImageFormat",
        "f",
        "setAlphaChannel",
        "a",
        "setAlphaChannelBox",
        "inValue",
        "getExtension",
        "setLineEdit",
        "setNodeName",
        "preserveFormat",
        "setDirectoryList",
        "browse",
        "ok",
        "setFileNumber",
        "id",
        "preserveExtension"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setPaths'
        QtMocHelpers::SlotData<void(QStringList)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'setFormat'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setNumbering'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'setImageFormat'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setAlphaChannel'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'setAlphaChannelBox'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'getExtension'
        QtMocHelpers::SlotData<QString()>(12, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'setLineEdit'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setNodeName'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'preserveFormat'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setDirectoryList'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'browse'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ok'
        QtMocHelpers::SlotData<int()>(18, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setFileNumber'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'preserveExtension'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SaveAs, qt_meta_tag_ZN6SaveAsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SaveAs::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SaveAsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SaveAsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6SaveAsE_t>.metaTypes,
    nullptr
} };

void SaveAs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SaveAs *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 1: _t->setFormat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setNumbering((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setImageFormat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setAlphaChannel((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setAlphaChannelBox((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: { QString _r = _t->getExtension();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setLineEdit(); break;
        case 8: _t->setNodeName(); break;
        case 9: _t->preserveFormat(); break;
        case 10: _t->setDirectoryList(); break;
        case 11: _t->browse(); break;
        case 12: { int _r = _t->ok();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setFileNumber((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->preserveExtension(); break;
        default: ;
        }
    }
}

const QMetaObject *SaveAs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveAs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SaveAsE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_SaveAs"))
        return static_cast< Ui_SaveAs*>(this);
    return QDialog::qt_metacast(_clname);
}

int SaveAs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
