/*********************************************************************************************
 * Pontificia Universidad Javeriana
 *
 * Materia Sistemas Operativos
 * Docente: J. Corredor, PhD
 * Autor: Xamuel perez
 * Fecha: 4/11/2025
 * Tema: OpenMP
 *
 * Descripción:
 *	-Introduccion en laboratiorio de OPENMP
 * 	-Clausulas y directivas para el programa
 *********************************************************************************************/

#include <omp.h>     // Header necesario para invocar API OpenMP
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int max_hilos= omp_get_max_threads();//obtiene el numero maximo de hilos disponibles en el sistema
    //imprime el numero de hilos disponibles
    printf("OpenMP ejecutando HIlos por cores con %d hilos\n", max_hilos);

    #pragma omp parallel//directiva para paralelizar el siguiente bloque de codigo
    {
        // Código que será ejecutado por todos los hilos
        printf("Hello World desde el thread %d\n", omp_get_thread_num());
    }

    return 0;
}

