# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =search
OBJS   =search.o

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
