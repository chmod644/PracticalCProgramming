# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =double
SRC    =double.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
