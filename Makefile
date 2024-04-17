# Defining constants

CC = gcc 
SRCDIR = ./src
INCDIR = ./include
OBJDIR = ./obj 



all:
	make numbers.o getline.o nstrlib.o

run:
	
numbers.o: ${SRCDIR}/numbers.c 		${INCDIR}/numbers.h
	gcc -c ${SRCDIR}/numbers.c -o 	${OBJDIR}/numbers.o

getline.o: ${SRCDIR}/getline.c 		${INCDIR}/getline.h
	gcc -c ${SRCDIR}/getline.c -o 	${OBJDIR}/getline.o

nstrlib.o: ${SRCDIR}/nstrlib.c 		${INCDIR}/nstrlib.h ${OBJDIR}/numbers.o ${OBJDIR}/getline.o
	gcc -c ${SRCDIR}/nstrlib.c -o 	${OBJDIR}/nstrlib.o 

internal.o: ${SRCDIR}/internal.c ${INCDIR}/internal.h
	gcc -c ${SRCDIR}/internal.c -o ${OBJDIR}/internal.o

clean:
	rm -rf ./obj/*.o
	rm -rf ./testing/*.o
obj:
	mkdir obj
