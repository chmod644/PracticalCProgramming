# Makefile
.PHONY: all clean $(TARGET)

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =q_zero
SRC    =q_zero.c

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
