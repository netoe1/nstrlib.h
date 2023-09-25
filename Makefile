 
all:
	make numbers.o getline.o nstrlib.o

run:
	
numbers.o: ./src/numbers.c ./include/numbers.h
	gcc -c ./src/numbers.c -o ./obj/numbers.o
getline.o: 	./src/getline.c ./include/getline.h
	gcc -c ./src/getline.c -o ./obj/getline.o
nstrlib.o: ./src/nstrlib.c ./include/nstrlib.h ./obj/numbers.o ./obj/getline.o
	gcc -c ./src/nstrlib.c -o ./obj/nstrlib.o 
testingRun:
	./testing/main
clean:
	rm -rf ./obj/*.o
	rm -rf ./testing/*.o
obj:
	mkdir obj
