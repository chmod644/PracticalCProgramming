# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =full1
SRC    =full1.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
