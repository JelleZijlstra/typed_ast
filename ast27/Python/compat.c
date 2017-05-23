#include "Python.h"

static PyObject*
PyUnicode_InternFromString(const char* n) {
    /* this doesn't actually intern it, but whatever */
    return PyUnicode_FromString(n);
}

char *
PyUnicode_AsUTF8(PyObject *unicode) {
    PyObject *bytestring;
    char *string;

    bytestring = PyUnicode_AsUTF8String(unicode);
    if (bytestring == NULL)
        return NULL;

    // TODO this leaks a reference
    string = PyString_AsString(bytestring);
    if (string == NULL) {
        return NULL;
    }
    return strdup(string);
}
