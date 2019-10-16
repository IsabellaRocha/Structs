all: functions.o
	gcc -o program functions.o

functions.o: functions.c
	gcc -c functions.c

run:
	./program

clean:
	rm *.o
