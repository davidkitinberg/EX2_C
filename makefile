# Master Makefile for the unified program
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = master_program

# Source files and their object files
SOURCES = main.c a/main_a.c b/main_b.c c/main_c.c d/main_d.c a/A_2.c b/palindrome.c c/matrix.c d/magicMatrix.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Generic rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean all object files and the target executable
clean:
	rm -f $(OBJECTS) $(TARGET)
