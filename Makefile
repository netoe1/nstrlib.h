 
all:
	gcc -c ./src/nstrlib.c -o ./obj/nstrlib.o

run:
	
testingRun:
	./testing/main
clean:
	rm -rf ./obj/*.o
	rm -rf ./testing/*.o
