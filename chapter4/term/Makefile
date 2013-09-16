# Makefile
.PHONY: all clean $(TARGET)

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =term
SRC    =term.c

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
