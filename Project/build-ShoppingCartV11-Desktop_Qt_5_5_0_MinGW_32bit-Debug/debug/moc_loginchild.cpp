/****************************************************************************
** Meta object code from reading C++ file 'loginchild.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppingCartV11/loginchild.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginchild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginChild_t {
    QByteArrayData data[12];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginChild_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginChild_t qt_meta_stringdata_LoginChild = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LoginChild"
QT_MOC_LITERAL(1, 11, 7), // "closeLg"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "sendNaPa"
QT_MOC_LITERAL(4, 29, 4), // "user"
QT_MOC_LITERAL(5, 34, 4), // "pass"
QT_MOC_LITERAL(6, 39, 8), // "beginReg"
QT_MOC_LITERAL(7, 48, 6), // "submit"
QT_MOC_LITERAL(8, 55, 8), // "showPass"
QT_MOC_LITERAL(9, 64, 7), // "subPush"
QT_MOC_LITERAL(10, 72, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 96, 17) // "on_Submit_clicked"

    },
    "LoginChild\0closeLg\0\0sendNaPa\0user\0"
    "pass\0beginReg\0submit\0showPass\0subPush\0"
    "on_pushButton_2_clicked\0on_Submit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginChild[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginChild::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginChild *_t = static_cast<LoginChild *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeLg(); break;
        case 1: _t->sendNaPa((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->beginReg(); break;
        case 3: _t->submit(); break;
        case 4: _t->showPass(); break;
        case 5: _t->subPush(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_Submit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginChild::closeLg)) {
                *result = 0;
            }
        }
        {
            typedef void (LoginChild::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginChild::sendNaPa)) {
                *result = 1;
            }
        }
        {
            typedef void (LoginChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginChild::beginReg)) {
                *result = 2;
            }
        }
        {
            typedef void (LoginChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginChild::submit)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject LoginChild::staticMetaObject = {
    { &QMdiSubWindow::staticMetaObject, qt_meta_stringdata_LoginChild.data,
      qt_meta_data_LoginChild,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginChild::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginChild.stringdata0))
        return static_cast<void*>(const_cast< LoginChild*>(this));
    return QMdiSubWindow::qt_metacast(_clname);
}

int LoginChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LoginChild::closeLg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LoginChild::sendNaPa(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoginChild::beginReg()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void LoginChild::submit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
