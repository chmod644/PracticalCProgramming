# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =ptr3
SRC    =ptr3.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
