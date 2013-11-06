# Makefile
CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =graph
SRC    =graph.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
