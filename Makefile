# Makefile
.PHONY: all clean
all:

clean:
	find -type d -regex .*chapter[0-9]+/.* | xargs -i{} make -C {} clean
