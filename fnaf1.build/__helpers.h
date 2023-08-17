#ifndef __NUITKA_CALLS_H__
#define __NUITKA_CALLS_H__

extern PyObject *CALL_FUNCTION_WITH_ARGS11(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS23(PyObject *called, PyObject *const *args);
extern PyObject *CALL_FUNCTION_WITH_ARGS17_KWSPLIT(PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names);
extern PyObject *CALL_FUNCTION_WITH_ARGS21_KWSPLIT(PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names);
#endif
