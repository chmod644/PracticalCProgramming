# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =p_array
SRC    =p_array.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
