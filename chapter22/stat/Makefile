# Makefile

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

CC       =gcc
CFLAGS   =-Wall -ansi -pedantic
TARGET   =stat
OBJS     =stat.o token.o ch_type.o in_file.o
INCLUDES =
LDFLAGS  =
LIBS     =

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(CFLAGS) $^ $(INCLUDES) $(LDFLAGS) $(LIBS)

.c.o:
	$(CC) -o $@ $(CFLAGS) -c $< $(INCLUDES)

stat.o: stat.c in_file.h ch_type.h token.h
token.o: token.c in_file.h ch_type.h token.h
ch_type.o: ch_type.c ch_type.h
in_file.o: in_file.c in_file.h

clean:
	rm -f $(TARGET) $(OBJS)
