# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =init2b
SRC    =init2b.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
