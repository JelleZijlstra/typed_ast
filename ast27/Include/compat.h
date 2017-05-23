#ifndef Ta27_COMPAT_H
#define Ta27_COMPAT_H

/*
 * Compatibility hooks for Python 2 and 3.
 */

static PyObject*
PyUnicode_InternFromString(const char* n);

char *
PyUnicode_AsUTF8(PyObject *unicode);

#define _PyUnicode_AsString PyUnicode_AsUTF8

/* does nothing */
#define PyUnicode_InternInPlace(v) (void)NULL

#endif /* !Ta27_COMPAT_H */
