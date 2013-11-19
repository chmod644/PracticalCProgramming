# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =fun-file
SRC    =fun-file.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
