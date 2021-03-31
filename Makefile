main:main.o
	gcc main.o -o main
	./main
main.o:main.c
	gcc -c main.c
clean:
	del main.o main.exe