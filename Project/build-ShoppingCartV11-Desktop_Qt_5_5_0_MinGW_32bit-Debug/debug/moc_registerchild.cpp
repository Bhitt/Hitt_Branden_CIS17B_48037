/****************************************************************************
** Meta object code from reading C++ file 'registerchild.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppingCartV11/registerchild.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerchild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RegisterChild_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterChild_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterChild_t qt_meta_stringdata_RegisterChild = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RegisterChild"
QT_MOC_LITERAL(1, 14, 6), // "submit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "back"
QT_MOC_LITERAL(4, 27, 5), // "clReg"
QT_MOC_LITERAL(5, 33, 12), // "enableSubmit"
QT_MOC_LITERAL(6, 46, 8), // "showPass"
QT_MOC_LITERAL(7, 55, 17), // "on_Submit_clicked"
QT_MOC_LITERAL(8, 73, 15), // "on_Back_clicked"
QT_MOC_LITERAL(9, 89, 21) // "on_toolButton_clicked"

    },
    "RegisterChild\0submit\0\0back\0clReg\0"
    "enableSubmit\0showPass\0on_Submit_clicked\0"
    "on_Back_clicked\0on_toolButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterChild[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegisterChild::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegisterChild *_t = static_cast<RegisterChild *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->submit(); break;
        case 1: _t->back(); break;
        case 2: _t->clReg(); break;
        case 3: _t->enableSubmit(); break;
        case 4: _t->showPass(); break;
        case 5: _t->on_Submit_clicked(); break;
        case 6: _t->on_Back_clicked(); break;
        case 7: _t->on_toolButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RegisterChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterChild::submit)) {
                *result = 0;
            }
        }
        {
            typedef void (RegisterChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterChild::back)) {
                *result = 1;
            }
        }
        {
            typedef void (RegisterChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterChild::clReg)) {
                *result = 2;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RegisterChild::staticMetaObject = {
    { &QMdiSubWindow::staticMetaObject, qt_meta_stringdata_RegisterChild.data,
      qt_meta_data_RegisterChild,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegisterChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterChild::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterChild.stringdata0))
        return static_cast<void*>(const_cast< RegisterChild*>(this));
    return QMdiSubWindow::qt_metacast(_clname);
}

int RegisterChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RegisterChild::submit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RegisterChild::back()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void RegisterChild::clReg()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
