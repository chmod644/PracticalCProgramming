# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =float
SRC    =float.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@
	
clean:
	rm -f $(TARGET)
