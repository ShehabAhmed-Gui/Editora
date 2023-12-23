/****************************************************************************
** Meta object code from reading C++ file 'foldersmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/files_manager/foldersmanager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foldersmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFoldersManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFoldersManagerENDCLASS = QtMocHelpers::stringData(
    "FoldersManager",
    "openFolder",
    "",
    "openFile",
    "saveFile",
    "filepath",
    "contest"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFoldersManagerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFoldersManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFoldersManagerENDCLASS_t qt_meta_stringdata_CLASSFoldersManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "FoldersManager"
        QT_MOC_LITERAL(15, 10),  // "openFolder"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "openFile"
        QT_MOC_LITERAL(36, 8),  // "saveFile"
        QT_MOC_LITERAL(45, 8),  // "filepath"
        QT_MOC_LITERAL(54, 7)   // "contest"
    },
    "FoldersManager",
    "openFolder",
    "",
    "openFile",
    "saveFile",
    "filepath",
    "contest"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFoldersManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x09,    2 /* Protected */,
       4,    2,   34,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QByteArray,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoldersManager::staticMetaObject = { {
    QMetaObject::SuperData::link<FilesSystemInterFace::staticMetaObject>(),
    qt_meta_stringdata_CLASSFoldersManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFoldersManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFoldersManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoldersManager, std::true_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'saveFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void FoldersManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoldersManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->openFolder();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QByteArray _r = _t->openFile();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->saveFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *FoldersManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoldersManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFoldersManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FilesSystemInterFace::qt_metacast(_clname);
}

int FoldersManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilesSystemInterFace::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
