# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = master_program

# Object files
OBJ = main.o a/main_a.o b/main_b.o c/main_c.o d/main_d.o a/A_2.o b/palindrome.o c/matrix.o d/magicMatrix.o e/main_e.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main.c
main.o: main.c e/main_e.h
    $(CC) $(CFLAGS) -c main.c

# Rule to compile main_e.c
e/main_e.o: e/main_e.c e/main_e.h
    $(CC) $(CFLAGS) -c e/main_e.c -o e/main_e.o

# Clean up generated files
clean:
    rm -f $(OBJ) $(TARGET)