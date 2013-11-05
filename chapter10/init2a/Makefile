# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =init2a
SRC    =init2a.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
