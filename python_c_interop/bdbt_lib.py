from setuptools import setup, Extension

module = Extension('bdbt', sources=['bdbt_lib.c'])

setup(
    name='Bdbt',
    version='1.0',
    description='Bdbt module',
    ext_modules=[module]
)
