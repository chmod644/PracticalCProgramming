# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =ptr2
SRC    =ptr2.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
