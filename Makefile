main:main.o arraylist.o
	gcc main.o arraylist.o -o main
	./main
main.o:main.c arraylist.h
	gcc -c main.c
arraylist.o:arraylist.c arraylist.h
	gcc -c arraylist.c
clean:
	rm main.o main.exe arraylist.o