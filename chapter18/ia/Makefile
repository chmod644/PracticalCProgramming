# Makefile

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

CC       =gcc
CFLAGS   =-Wall -ansi -pedantic
TARGET   =hist
OBJS     =hist.o ia.o
INCLUDES =
LDFLAGS  =
LIBS     =

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(CFLAGS) $^ $(INCLUDES) $(LDFLAGS) $(LIBS)

.c.o:
	$(CC) -o $@ $(CFLAGS) -c $< $(INCLUDES)
hist.o: hist.c ia.h
ia.o: ia.c ia.h

clean:
	rm -f $(TARGET) $(OBJS)
