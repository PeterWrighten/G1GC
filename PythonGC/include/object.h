#include<stdlib.h>

#define PyObject_HEAD  PyObject ob_base;
#define _PyObject_HEAD_EXTRA  PyObject ob_base;

typedef struct _object{
    _PyObject_HEAD_EXTRA
    Py_ssize_t ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;

#define PyObject_VAR_HEAD PyVarObject ob_base;

typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;

