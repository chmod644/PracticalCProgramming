# Makefile

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =list
OBJS   =list.o

all: $(OBJS)
# all: $(TARGET)
# 
# $(TARGET): $(OBJS)
# 	$(CC) $(CFLAGS) $^ -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
