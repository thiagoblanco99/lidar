from setuptools import find_packages
from setuptools import setup

setup(
    name='version1',
    version='0.0.0',
    packages=find_packages(
        include=('version1', 'version1.*')),
)
