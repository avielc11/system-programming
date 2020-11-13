

FLAG = -Wall -g

all: libmyMath.a libmyMath.so mains maind
mains: main.o libmyMath.a
	gcc $(FLAG) -o mains main.o libmyMath.a
maind: main.o 
	gcc $(FLAG) -o maind main.o ./libmyMath.so
libmyMath.a: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o	
libmyMath.so: basicMath.o power.o
	gcc -shared -o libmyMath.so basicMath.o power.o
main.o: main.c myMath.h
	gcc $(FLAG) -c main.c
basicMath.o: basicMath.c myMath.h
	gcc $(FLAG) -c basicMath.c
power.o: power.c myMath.h
	gcc $(FLAG) -c power.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so maind mains

