# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =tmp2
SRC    =tmp2.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
