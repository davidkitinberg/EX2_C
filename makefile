# Master Makefile for the unified program
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = master_program

# Source files
SOURCES = main.c a/main_a.c b/main_b.c c/main_c.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
