# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =fib
SRC    =fib.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
