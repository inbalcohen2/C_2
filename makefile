all: compile run clean

compile:
		gcc -Wall -g -o main.o myBank.c main.c
run:
	./run.o	
compilerun:
			gcc -Wall -g -o main.o myBank.c main.c
			./main.o
clean:
	rm -f *.o