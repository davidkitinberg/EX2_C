# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program_h

# Object files
OBJ = main_h.o Jumper.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_h.c
main_h.o: main_h.c Jumper.h
	$(CC) $(CFLAGS) -c main_h.c -o main_h.o

# Rule to compile Jumper.c
Jumper.o: Jumper.c Jumper.h
	$(CC) $(CFLAGS) -c Jumper.c -o Jumper.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)