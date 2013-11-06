# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =and
SRC    =and.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
