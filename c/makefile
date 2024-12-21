# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_c.o matrix.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_c.c
main_c.o: main_c.c matrix.h
	$(CC) $(CFLAGS) -c main_c.c

# Rule to compile matrix.c
matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)
