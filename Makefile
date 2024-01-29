CC       ?= $(CROSS_COMPILE)gcc
LD     = $(CC)
CFLAGS = -Ofast
LDFLAGS = -static -s
OBJECTS += \
	cputemp.o
COMPILE = $($(quiet)CC) $(CFLAGS) -MD -c cputemp.c -o cputemp.o
LINK    = $($(quiet)LD) -o cputemp cputemp.o $(LDFLAGS)
all:
	$(COMPILE)
	$(LINK)

clean:
	rm -f cputemp.o
	rm -f cputemp.d
	rm -f cputemp
install:
	install cputemp -p /usr/local/bin
