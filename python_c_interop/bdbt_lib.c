#include <Python.h>

// Function implementation
static PyObject *hello_world(PyObject *self, PyObject *args) {
  return Py_BuildValue("s", "Hello, World!");
}

// Method table
// ml_name: name of method
// ml_meth: pointer to C impl
// ml_flags: flags bit on call construction
// ml docs:
static PyMethodDef HelloMethods[] = {
    {"hello", (PyCFunction)hello_world, METH_NOARGS, "Print 'Hello, World!'"},
    {NULL, NULL, 0, NULL} // Sentinel
};

// Module definition
static struct PyModuleDef bdbt_module = {
    PyModuleDef_HEAD_INIT,
    "bdbt", // Module name
    NULL,   // Module documentation
    -1,     // Size of per-interpreter state or -1
    HelloMethods};

// Module initialization function
PyMODINIT_FUNC PyInit_bdbt(void) { return PyModule_Create(&bdbt_module); }
