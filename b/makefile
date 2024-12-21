# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program

# Object files
OBJ = main_b.o palindrome.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_b.c
main_b.o: main_b.c palindrome.h
	$(CC) $(CFLAGS) -c main_b.c

# Rule to compile palindrome.c
palindrome.o: palindrome.c palindrome.h
	$(CC) $(CFLAGS) -c palindrome.c

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)
