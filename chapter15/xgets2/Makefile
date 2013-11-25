# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =xgets2.o
SRC    =xgets2.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<
	
clean:
	rm -f $(TARGET)
