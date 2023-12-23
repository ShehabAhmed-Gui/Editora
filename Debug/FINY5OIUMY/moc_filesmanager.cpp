/****************************************************************************
** Meta object code from reading C++ file 'filesmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/files_manager/filesmanager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS = QtMocHelpers::stringData(
    "SystemFilesManager",
    "openFile",
    "",
    "filePath",
    "saveFile",
    "filepath",
    "contest",
    "openFolder",
    "QWidget*",
    "parent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[11];
    char stringdata8[9];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS_t qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "SystemFilesManager"
        QT_MOC_LITERAL(19, 8),  // "openFile"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 8),  // "filePath"
        QT_MOC_LITERAL(38, 8),  // "saveFile"
        QT_MOC_LITERAL(47, 8),  // "filepath"
        QT_MOC_LITERAL(56, 7),  // "contest"
        QT_MOC_LITERAL(64, 10),  // "openFolder"
        QT_MOC_LITERAL(75, 8),  // "QWidget*"
        QT_MOC_LITERAL(84, 6)   // "parent"
    },
    "SystemFilesManager",
    "openFile",
    "",
    "filePath",
    "saveFile",
    "filepath",
    "contest",
    "openFolder",
    "QWidget*",
    "parent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemFilesManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       1,    0,   41,    2, 0x2a,    3 /* Public | MethodCloned */,
       4,    2,   42,    2, 0x0a,    4 /* Public */,
       7,    1,   47,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::QByteArray, QMetaType::QString,    3,
    QMetaType::QByteArray,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject SystemFilesManager::staticMetaObject = { {
    QMetaObject::SuperData::link<FilesSystemInterFace::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemFilesManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SystemFilesManager, std::true_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'saveFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>
    >,
    nullptr
} };

void SystemFilesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemFilesManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QByteArray _r = _t->openFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 1: { QByteArray _r = _t->openFile();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->saveFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->openFolder((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SystemFilesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemFilesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemFilesManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FilesSystemInterFace::qt_metacast(_clname);
}

int SystemFilesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilesSystemInterFace::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
