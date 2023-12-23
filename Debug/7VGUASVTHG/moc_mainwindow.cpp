/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/notebad/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSbaseClassENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSbaseClassENDCLASS = QtMocHelpers::stringData(
    "baseClass",
    "openFile",
    "",
    "saveFile",
    "openFolder",
    "itemDoubleClicked",
    "QModelIndex",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSbaseClassENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[18];
    char stringdata6[12];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSbaseClassENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSbaseClassENDCLASS_t qt_meta_stringdata_CLASSbaseClassENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "baseClass"
        QT_MOC_LITERAL(10, 8),  // "openFile"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 8),  // "saveFile"
        QT_MOC_LITERAL(29, 10),  // "openFolder"
        QT_MOC_LITERAL(40, 17),  // "itemDoubleClicked"
        QT_MOC_LITERAL(58, 11),  // "QModelIndex"
        QT_MOC_LITERAL(70, 5)   // "index"
    },
    "baseClass",
    "openFile",
    "",
    "saveFile",
    "openFolder",
    "itemDoubleClicked",
    "QModelIndex",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSbaseClassENDCLASS[] = {

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
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject baseClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSbaseClassENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSbaseClassENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSbaseClassENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<baseClass, std::true_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void baseClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<baseClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openFile(); break;
        case 1: _t->saveFile(); break;
        case 2: _t->openFolder(); break;
        case 3: _t->itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *baseClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *baseClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSbaseClassENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int baseClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
