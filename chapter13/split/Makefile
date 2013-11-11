# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =split
SRC    =split.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
