CC = gcc

CFLAGS = -Wall -Wextra -pedantic

TARGET = calcfrac

SRC := $(wildcard src/*.c)
OBJ := $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)
