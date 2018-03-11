excute : main.o ./Debug/log/log.o
	gcc -o excute main.o ./Debug/log/log.o

main.o : main.c ./Debug/log/log.c
	gcc -c main.c ./Debug/log/log.c

clean :
	rm -rf excute *.o