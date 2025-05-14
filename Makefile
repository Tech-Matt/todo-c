CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Iinclude

SRC = src/main.c src/task.c 
OBJ = $(SRC:.c=.o)
TARGET = build/todo

all: build $(TARGET)

build:
	mkdir -p build

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -rf build

.PHONY: all clean build