# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_d.o magicMatrix.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_d.c
main_d.o: main_d.c magicMatrix.h
	$(CC) $(CFLAGS) -c main_d.c

# Rule to compile magicMatrix.c
magicMatrix.o: magicMatrix.c magicMatrix.h
	$(CC) $(CFLAGS) -c magicMatrix.c

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)