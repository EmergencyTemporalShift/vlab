/****************************************************************************
** Meta object code from reading C++ file 'Export.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Export.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Export.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6ExportE_t {};
} // unnamed namespace

template <> constexpr inline auto Export::qt_create_metaobjectdata<qt_meta_tag_ZN6ExportE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Export",
        "setType",
        "",
        "setPaths",
        "setFormat",
        "browse",
        "ok",
        "selectingPath",
        "text",
        "setNodeName",
        "changeExtension",
        "preserveExtension",
        "preserveFormat",
        "getExtension",
        "setLineEdit",
        "getNodeName",
        "getRecursive",
        "setRecursive",
        "inValue"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setType'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setPaths'
        QtMocHelpers::SlotData<void(QStringList)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'setFormat'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'browse'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ok'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectingPath'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'setNodeName'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeExtension'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'preserveExtension'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'preserveFormat'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getExtension'
        QtMocHelpers::SlotData<QString()>(13, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'setLineEdit'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getNodeName'
        QtMocHelpers::SlotData<QString()>(15, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getRecursive'
        QtMocHelpers::SlotData<bool()>(16, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setRecursive'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Export, qt_meta_tag_ZN6ExportE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Export::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ExportE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ExportE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6ExportE_t>.metaTypes,
    nullptr
} };

void Export::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Export *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setType((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->setFormat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->browse(); break;
        case 4: _t->ok(); break;
        case 5: _t->selectingPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setNodeName(); break;
        case 7: _t->changeExtension((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->preserveExtension(); break;
        case 9: _t->preserveFormat(); break;
        case 10: { QString _r = _t->getExtension();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setLineEdit(); break;
        case 12: { QString _r = _t->getNodeName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->getRecursive();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setRecursive((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Export::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Export::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6ExportE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Export::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
