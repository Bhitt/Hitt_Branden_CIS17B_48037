/****************************************************************************
** Meta object code from reading C++ file 'surveylistchild.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../survey_base/surveylistchild.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surveylistchild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SurveyListChild_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurveyListChild_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurveyListChild_t qt_meta_stringdata_SurveyListChild = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SurveyListChild"
QT_MOC_LITERAL(1, 16, 12), // "goToDatabase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "letsGoToMenu"
QT_MOC_LITERAL(4, 43, 6), // "setBox"
QT_MOC_LITERAL(5, 50, 5), // "hello"
QT_MOC_LITERAL(6, 56, 17) // "on_goback_clicked"

    },
    "SurveyListChild\0goToDatabase\0\0"
    "letsGoToMenu\0setBox\0hello\0on_goback_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurveyListChild[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   43,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SurveyListChild::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurveyListChild *_t = static_cast<SurveyListChild *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goToDatabase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->letsGoToMenu(); break;
        case 2: _t->setBox(); break;
        case 3: _t->hello(); break;
        case 4: _t->on_goback_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurveyListChild::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurveyListChild::goToDatabase)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurveyListChild::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurveyListChild::letsGoToMenu)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SurveyListChild::staticMetaObject = {
    { &QMdiSubWindow::staticMetaObject, qt_meta_stringdata_SurveyListChild.data,
      qt_meta_data_SurveyListChild,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SurveyListChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurveyListChild::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SurveyListChild.stringdata0))
        return static_cast<void*>(const_cast< SurveyListChild*>(this));
    return QMdiSubWindow::qt_metacast(_clname);
}

int SurveyListChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SurveyListChild::goToDatabase(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SurveyListChild::letsGoToMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
