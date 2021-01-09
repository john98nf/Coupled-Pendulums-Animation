TARGET = animation
.DEFAULT_GOAL := $(TARGET)

CC = g++
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
_OBJ = pendulum.o Double_pendulum.o main.o
_SRC = pendulum.cpp Double_pendulum.cpp main.cpp

SDIR = src
ODIR = src
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp
	@echo "Found $^..."
	$(CC) -c $^ -o $@

$(TARGET): $(OBJ)
	@echo "Linking..."
	$(CC) -o $@.out $^ $(LFLAGS)
	@echo
	@echo DONE

clean:
	@echo "Cleaning up..."
	$(RM) -f $(ODIR)/*.o *.out
	@echo
	@echo DONE
