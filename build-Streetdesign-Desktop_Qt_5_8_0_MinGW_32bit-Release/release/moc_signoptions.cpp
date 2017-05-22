/****************************************************************************
** Meta object code from reading C++ file 'signoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../master 4/signoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SignOptions_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignOptions_t qt_meta_stringdata_SignOptions = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SignOptions"
QT_MOC_LITERAL(1, 12, 11), // "pressDelete"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 47, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 71, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 95, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(7, 119, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 143, 23) // "on_DeleteButton_clicked"

    },
    "SignOptions\0pressDelete\0\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_2_clicked\0"
    "on_DeleteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SignOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignOptions *_t = static_cast<SignOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressDelete(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_DeleteButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignOptions::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignOptions::pressDelete)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SignOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SignOptions.data,
      qt_meta_data_SignOptions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SignOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SignOptions.stringdata0))
        return static_cast<void*>(const_cast< SignOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int SignOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SignOptions::pressDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
