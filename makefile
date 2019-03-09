
vpath %.c src
vpath %.h include

CC := gcc

CFLAGS := -O3 -mtune=intel -march=skylake -mavx2
CPPFLAGS := -I include

LFLAGS += -lgmp -lmpfr

PROGRAM := EPL


all: $(PROGRAM)


$(PROGRAM): File.o String.o Random.o EPL.o
	$(CC) $(CFLAGS) $(LFLAGS) -o $@ $^

EPL.o: EPL.c

File.o: File.c

String.o: String.c

Random.o: Random.c


.PHONY: clean
clean:
	rm -rf *.o $(PROGRAM)
