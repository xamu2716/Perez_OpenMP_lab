#############################################################################################
 # Pontificia Universidad Javeriana
 #
 # Materia Sistemas Operativos
 # Docente: J. Corredor, PhD
 # Autor: Xamuel Perez
 # Fecha: 4/11/2025
 # Tema: OpenMP
 #
 # Descripción:
 #  - Makefile para compilar los programas de laboratorio de OpenMP
 #############################################################################################/
GCC = gcc
FLAGS = -fopenmp -lm

PROGRAMAS = lab01 lab02 lab03 lab04 lab05

lab01:
	$(GCC) $@.c -o $@ $(FLAGS)

lab02:
	$(GCC) $@.c -o $@ $(FLAGS)

lab03:
	$(GCC) $@.c -o $@ $(FLAGS)

lab04:
	$(GCC) $@.c -o $@ $(FLAGS)

lab05:
	$(GCC) $@.c -o $@ $(FLAGS)

clean:
	$(RM) $(PROGRAMAS)
