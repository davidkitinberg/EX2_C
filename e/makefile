# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_e.o LightestPath.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_e.c
main_e.o: main_e.c LightestPath.h
	$(CC) $(CFLAGS) -c main_e.c

# Rule to compile LightestPath.c
LightestPath.o: LightestPath.c LightestPath.h
	$(CC) $(CFLAGS) -c LightestPath.c

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)