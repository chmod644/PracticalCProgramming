# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =call
SRC    =call.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
