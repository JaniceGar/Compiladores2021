# Esto es un comentario
#Prueba del makefile

#Reglas del programa

programa: main.o salida.o calculadora.o
	gcc --o programa main.o salida-.o calculadora.o

#regla main
main.o: main.c funciones.h
	gcc -c main.c

salida.o: salida.c funciones.h
	gcc -c salida.c