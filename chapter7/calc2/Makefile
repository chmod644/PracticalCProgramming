# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =calc2
SRC    =calc2.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
