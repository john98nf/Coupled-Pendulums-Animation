# Coupled-Pendulums-Animation
[![C++](https://img.shields.io/badge/Implementation-C++-pink.svg)](https://www.cplusplus.com/)
[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)
[![MIT license](https://img.shields.io/badge/License-MIT-blue.svg)](https://github.com/john98nf/Coupled-Pendulums-Animation/blob/master/LICENSE)
[![Open Source Love svg2](https://badges.frapsoft.com/os/v2/open-source.svg?v=103)](https://github.com/ellerbrock/open-source-badges/)

A simple animation of the physical response of two [coupled pendulums](https://en.wikipedia.org/wiki/Double_pendulum) oscillating, without any kind of friction losses or external stimulation. Its geometry is the one explained below. This project was created back in the summer of 2017, after my freshman year in college. 

### 📌 Geometry

The first pendulum is attached to a stationary point and \
the second one is attached to the first one.

### 📌 Software Prerequesties

For trying this simple project on your own, you just have to install some basic Development Tools, a C++ compiler and [SFML](https://www.sfml-dev.org/) libraries. For Ubuntu, or some debian based distibution in general, this can be done with the following commands:

```
sudo apt update
# Development tools like gcc, g++ compilers along with make 
# (Package name might varies, depending on your linux distro)
sudo apt install build-essential
# Ubuntu Package for sfml libraries. (Might varies, depending on your linux distro)
sudo apt install libsfml-dev
```

### 📌 Compiling & Running

The whole process of compiling and linking object files can be done using the *Makefile*. Just execute the ```make``` command inside this repo directory. After this operation, executable *animation.out* is created. Enjoy 😀😀!

### 📌 Screenshot

<img src="https://user-images.githubusercontent.com/45902117/59146802-653ffe00-89fb-11e9-9321-39f53aa24f54.png" width="200" height="200" />
