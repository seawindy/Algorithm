excute : main.o
	gcc -o excute main.o

main.o : main.c
	gcc -c main.c

clean :
	rm -rf excute *.o