CC=gcc 
FLAGS= -Wall -g
AR=ar

all: mains maind


mymaths: libmyMath.a
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	

mymathd: libmyMath.so
libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o


mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c


maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so


.PHONY: clean all

clean: 
	rm -f maind mains *.so *.a *.o