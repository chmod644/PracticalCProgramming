# Makefile
.PHONY: all clean $(TARGET)

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =twice
SRC    =twice.c

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
