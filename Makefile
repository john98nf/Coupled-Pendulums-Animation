.DEFAULT_GOAL := animation

CC = g++
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
objects = pendulum.o Double_pendulum.o main.o
src = main.cpp Double_pendulum.cpp pendulum.cpp

animation:
	@echo "Compiling code..."
	$(CC) -c $(src)
	@echo "Linking with sfml library..."
	$(CC) -o main.out $(objects) $(LFLAGS)

clean:
	@echo "Cleaning up..."
	rm -f *.o *.out
