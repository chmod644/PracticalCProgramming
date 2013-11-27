# Makefile

CC     =gcc
CFLAGS =-Wall -ansi -pedantic
TARGET =matrix1
OBJS   =matrix1.o matrix2.o matrix3.o matrix4.o matrix5.o matrix6.o matrix7.o matrix8.o matrix9.o

.PHONY: all clean

.SUFFIXES:
.SUFFIXES: .o .c

all: $(TARGET)

$(TARGET): $(OBJS)
#	$(CC) $(CFLAGS) $^ -o $@
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
