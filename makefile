# Master Makefile for the unified program
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = master_program

# Source files and their object files
SOURCES = \
	main.c \
	a/main_a.c a/A_2.c \
	b/main_b.c b/palindrome.c \
	c/main_c.c c/matrix.c \
	d/main_d.c d/magicMatrix.c \
	e/main_e.c e/LightestPath.c \
	f/main_f.c f/Knapsack.c\
	g/main_g.c g/SubArraySize.c


OBJECTS = $(SOURCES:.c=.o)

# Default target to build the program
all: $(TARGET)

# Rule to build the final executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Generic rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean all object files and the target executable
clean:
	rm -f $(OBJECTS) $(TARGET)