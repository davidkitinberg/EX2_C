# Master Makefile for the unified program
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = master_program

# Source files and their object files
SOURCES = main.c a/main_a.c b/main_b.c c/main_c.c d/main_d.c e/main_e.c \
	f/main_f.c g/main_g.c h/main_h.c i/main_i.c j/main_j.c a/A_2.c b/palindrome.c c/matrix.c d/magicMatrix.c \
	e/shortestPath.c f/knapsack.c g/subArrSize.c h/canBePutTogether.c i/findStartOfLoop.c j/subArrIndexes.c
OBJECTS = $(SOURCES:.c=.o)

# Default target to build everything
all: $(TARGET)

# Rule to link all object files into the master program
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

# Rule to compile individual .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET)
