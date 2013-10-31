# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =total5f
SRC    =total5f.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
