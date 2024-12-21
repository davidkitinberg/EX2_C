# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_a.o A_2.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_a.c
main_a.o: main_a.c A_2.h
	$(CC) $(CFLAGS) -c main_a.c

# Rule to compile A_2.c
A_2.o: A_2.c A_2.h
	$(CC) $(CFLAGS) -c A_2.c

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)
