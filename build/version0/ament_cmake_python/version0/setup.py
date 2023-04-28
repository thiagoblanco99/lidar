from setuptools import find_packages
from setuptools import setup

setup(
    name='version0',
    version='0.0.0',
    packages=find_packages(
        include=('version0', 'version0.*')),
)
