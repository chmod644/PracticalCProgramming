# Makefile

.PHONY: all clean

CC       =gcc
CFLAGS   =-Wall -ansi -pedantic
TARGET   =not2
SRC      =not2.c
INCLUDES =
LDFLAGS  =
LIBS     =

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(INCLUDES) $(LDFLAGS) $(LIBS)

clean:
	rm -f $(TARGET)
