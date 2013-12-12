# Makefile

.PHONY: all clean

CC       =gcc
CFLAGS   =-Wall -ansi -pedantic
TARGET   =sine
SRC      =sine.c
INCLUDES =
LDFLAGS  =-lm
LIBS     =

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $@ $(CFLAGS) $^ $(INCLUDES) $(LDFLAGS) $(LIBS)

clean:
	rm -f $(TARGET)
