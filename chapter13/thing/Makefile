# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =thing
SRC    =thing.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
