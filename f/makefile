# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_f.o Knapsack.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_f.c
main_f.o: main_f.c Knapsack.h
	$(CC) $(CFLAGS) -c main_f.c -o main_f.o

# Rule to compile Knapsack.c
Knapsack.o: Knapsack.c Knapsack.h
	$(CC) $(CFLAGS) -c Knapsack.c -o Knapsack.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)