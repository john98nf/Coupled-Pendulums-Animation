# Coupled-Pendulums-Animation

If anyone wants to build in his personal computer (using a debian based, linux distro), the necessary commands are the following:

    g++ -c main.cpp Double_pendulum.cpp pendulum.cpp
    g++ -o main main.o Double_pendulum.o pendulum.o -lsfml-graphics -lsfml-window -lsfml-system

For downloading the needed libraries just install the libsfml-dev package.
