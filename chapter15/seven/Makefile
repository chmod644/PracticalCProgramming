# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =seven
OBJS   =seven.o

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

all: $(TARGET) Makefile

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
