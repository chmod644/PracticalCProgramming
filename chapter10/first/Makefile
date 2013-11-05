# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =first
SRC    =first.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
