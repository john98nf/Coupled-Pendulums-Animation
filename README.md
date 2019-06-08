# Coupled-Pendulums-Animation

![screenshot](https://user-images.githubusercontent.com/45902117/59146802-653ffe00-89fb-11e9-9321-39f53aa24f54.png)

If anyone wants to build this project in his personal computer (using a debian based-linux distro), the necessary commands are the following:

    g++ -c main.cpp Double_pendulum.cpp pendulum.cpp
    g++ -o main main.o Double_pendulum.o pendulum.o -lsfml-graphics -lsfml-window -lsfml-system

For downloading the needed libraries just install the libsfml-dev package.
