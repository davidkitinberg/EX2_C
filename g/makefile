# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

# Target executable
TARGET = program_g

# Object files
OBJ = main_g.o SubArraySize.o

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile main_g.c
main_g.o: main_g.c SubArraySize.h
	$(CC) $(CFLAGS) -c main_g.c -o main_g.o

# Rule to compile SubArraySize.c
SubArraySize.o: SubArraySize.c SubArraySize.h
	$(CC) $(CFLAGS) -c SubArraySize.c -o SubArraySize.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)