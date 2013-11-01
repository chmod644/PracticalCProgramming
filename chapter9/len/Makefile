# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =len
SRC    =len.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
