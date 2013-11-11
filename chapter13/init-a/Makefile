# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =init-a
SRC    =init-a.c

.PHONY: all clean $(TARGET)

all: $(TARGET) Makefile

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	rm -f $(TARGET)
