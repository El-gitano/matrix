LIBS= matrice.c
OBJ= matrice.o
HEADERS = matrice.h
FLAGS= -Wall -g
	
compile: ${LIBS} ${HEADERS}

	gcc -c ${LIBS} ${FLAGS}

clean: ${OBJ}

	rm -f ${OBJ}	
