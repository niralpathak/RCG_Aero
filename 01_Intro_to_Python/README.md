# Intro to Python
Files for learning Python using iPython Notebook.

## Requirements
- numpy
- matplotlib
- ipython-notebook

The easiest way to install Python and the above packages is using Anaconda, a free Python distribution created by [Continuum Analytics](http://continuum.io/) that is compatible with Windows, Mac OSX and Linux. To install:

1. download the Python 2.7 installer for your OS here: http://continuum.io/downloads
2. run the installer
3. check that the install worked by opening "Launcher" (a graphic interface installed as part of Anaconda) and "launch" ipython-notebook (which will open in your web browser)

If you need more info, see:
- http://docs.continuum.io/anaconda/install.html
- http://docs.continuum.io/anaconda-launcher/index.html

## Sources
- beam bending image: http://upload.wikimedia.org/wikipedia/commons/1/10/Beam_bending.png

--------------------------------------------------

## FAQ

### Why learn/use Python?
Python is a free, open-source programming language that is used and supported in many fields of engineering, both in academia and industry. It has a simple syntax, is easy to learn (especially for first time programmers), and has great community support (i.e. you are likely to find help online). That is not to say that Python is perfect or the best language for every scenario. But it's not a bad language to know.

### Why use Anaconda?
Anaconda simplifies the installation of Python and common scientific packages, especially on Windows. You can install everything manually, but for this workshop we will only support Anaconda (i.e. we will only help troubleshoot installs that used Anaconda).

### Why use iPython Notebook?
iPython Notebook is an interactive development environment (IDE) that runs in a web-browser. While you can write Python code in any text editor and run in from the command-line, many find iPython Notebook easier to use. And due to its popularity, you can find tons of example iPython notebooks online that you can download and then run (e.g. [this list of notebooks](https://github.com/ipython/ipython/wiki/A-gallery-of-interesting-IPython-Notebooks)).

Also, iPython Notebook has several helpful features built-in, such as:
- tab-completion of code
- in-line display of figures (e.g. matplotlib plots)
- code can be split up into "cells" (chunks of code that can be run separately)
- support for Markdown and LaTeX formatting
- can be exported as a standalone HTML file (which can be hosted on a website)

### What are alternatives to iPython Notebook?
- [Spyder](https://code.google.com/p/spyderlib/): similar to Matlab's graphical interface
- [PyCharm](http://www.jetbrains.com/pycharm/): a standalone Python IDE
- [PyDev](http://pydev.org/): a Python IDE for Eclipse

### Is Python the best for {ambiguously described project}?
TL;DR: it depends.

Without knowing all the details of a project, it's tough to say whether Python is the best choice. For example, a common criticism of Python is that it is too slow for computationally intensive projects (e.g. image processing). But Python can be extremeley fast if you are able use vectorized calculations (via numpy) or re-write slow parts of a program in C (via Cython).

Another important deciding factor is the community support of a topic area for different programming languages. While most problems can be solved with almost any programming language, one language may be the defacto standard (e.g. C++ for computer vision). By choosing the commonly used language, you are more likely to receive support (on StackOverflow, Github, etc.).
