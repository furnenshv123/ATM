/****************************************************************************
** Meta object code from reading C++ file 'russian_pin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../russian_pin.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'russian_pin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
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
struct qt_meta_stringdata_CLASSrussian_pinENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSrussian_pinENDCLASS = QtMocHelpers::stringData(
    "russian_pin",
    "signal_for_lang",
    "",
    "d",
    "wait_Timer",
    "on_insertButton_clicked",
    "on_lineEdit_textEdited",
    "arg1",
    "slot",
    "a",
    "slot_pin_show",
    "slot_language",
    "c"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSrussian_pinENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[11];
    char stringdata5[24];
    char stringdata6[23];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[2];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSrussian_pinENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSrussian_pinENDCLASS_t qt_meta_stringdata_CLASSrussian_pinENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "russian_pin"
        QT_MOC_LITERAL(12, 15),  // "signal_for_lang"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 1),  // "d"
        QT_MOC_LITERAL(31, 10),  // "wait_Timer"
        QT_MOC_LITERAL(42, 23),  // "on_insertButton_clicked"
        QT_MOC_LITERAL(66, 22),  // "on_lineEdit_textEdited"
        QT_MOC_LITERAL(89, 4),  // "arg1"
        QT_MOC_LITERAL(94, 4),  // "slot"
        QT_MOC_LITERAL(99, 1),  // "a"
        QT_MOC_LITERAL(101, 13),  // "slot_pin_show"
        QT_MOC_LITERAL(115, 13),  // "slot_language"
        QT_MOC_LITERAL(129, 1)   // "c"
    },
    "russian_pin",
    "signal_for_lang",
    "",
    "d",
    "wait_Timer",
    "on_insertButton_clicked",
    "on_lineEdit_textEdited",
    "arg1",
    "slot",
    "a",
    "slot_pin_show",
    "slot_language",
    "c"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSrussian_pinENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   59,    2, 0x08,    3 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    1,   61,    2, 0x08,    5 /* Private */,
       8,    1,   64,    2, 0x0a,    7 /* Public */,
      10,    0,   67,    2, 0x0a,    9 /* Public */,
      11,    1,   68,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject russian_pin::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSrussian_pinENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSrussian_pinENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSrussian_pinENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<russian_pin, std::true_type>,
        // method 'signal_for_lang'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'wait_Timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_insertButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slot_pin_show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_language'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void russian_pin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<russian_pin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_for_lang((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->wait_Timer(); break;
        case 2: _t->on_insertButton_clicked(); break;
        case 3: _t->on_lineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->slot_pin_show(); break;
        case 6: _t->slot_language((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (russian_pin::*)(bool );
            if (_t _q_method = &russian_pin::signal_for_lang; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *russian_pin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *russian_pin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSrussian_pinENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int russian_pin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void russian_pin::signal_for_lang(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
