# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program_h

# Object files
OBJ = main_h.o Ex8.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_h.c
main_h.o: main_h.c Ex8.h
	$(CC) $(CFLAGS) -c main_h.c -o main_h.o

# Rule to compile Ex8.c
Ex8.o: Ex8.c Ex8.h
	$(CC) $(CFLAGS) -c Ex8.c -o Ex8.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)