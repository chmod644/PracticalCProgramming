# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =calc1
SRC    =calc1.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
