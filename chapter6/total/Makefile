# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =total
SRC    =total.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
