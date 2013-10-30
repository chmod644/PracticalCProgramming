# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =good
SRC    =good.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
