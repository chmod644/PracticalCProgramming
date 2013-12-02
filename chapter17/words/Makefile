# Makefile

.PHONY: all clean

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =words
SRC    =words.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)
