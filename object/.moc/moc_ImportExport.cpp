/****************************************************************************
** Meta object code from reading C++ file 'ImportExport.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImportExport.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImportExport.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12ImportExportE_t {};
} // unnamed namespace

template <> constexpr inline auto ImportExport::qt_create_metaobjectdata<qt_meta_tag_ZN12ImportExportE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ImportExport",
        "setRecursive",
        "",
        "setType",
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
        "getNodeName"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setRecursive'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setType'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setPaths'
        QtMocHelpers::SlotData<void(QStringList)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'setFormat'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'browse'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ok'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectingPath'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'setNodeName'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeExtension'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'preserveExtension'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'preserveFormat'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getExtension'
        QtMocHelpers::SlotData<QString()>(14, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'setLineEdit'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getNodeName'
        QtMocHelpers::SlotData<QString()>(16, 2, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImportExport, qt_meta_tag_ZN12ImportExportE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ImportExport::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImportExportE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImportExportE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ImportExportE_t>.metaTypes,
    nullptr
} };

void ImportExport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImportExport *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setRecursive((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setType((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->browse(); break;
        case 5: _t->ok(); break;
        case 6: _t->selectingPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setNodeName(); break;
        case 8: _t->changeExtension((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->preserveExtension(); break;
        case 10: _t->preserveFormat(); break;
        case 11: { QString _r = _t->getExtension();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setLineEdit(); break;
        case 13: { QString _r = _t->getNodeName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ImportExport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportExport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImportExportE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ImportExport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
