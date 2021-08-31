# Esto es un comentario
#Prueba del makefile

#Reglas del programa

programa: main.o salida.o calculadora.o
	gcc --o programa main.o salida-.o calculadora.o

#regla main
main.o: main.c funciones.h
	gcc -c main.c
#regla salida
salida.o: salida.c funciones.h
	gcc -c salida.c

calculadora.o: calculadora.c funciones.h 
	gcc -c calculadora.c

#esta regla nos elimina los programas .o
clean:
	rm -f programa *.o

#ando viendo videos para saber como funcionan los makefile :'v 
