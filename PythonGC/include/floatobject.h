#include "object.h"

typedef struct {
    PyObject_HEAD
    double ob_fval;
} PyFloatObject;