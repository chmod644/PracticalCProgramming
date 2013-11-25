# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =base3
OBJS   =base3.o
.PHONY: all clean $(TARGET)
.SUFFIXES:
.SUFFIXES: .o .c
all: $(TARGET) Makefile

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
