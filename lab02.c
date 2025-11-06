/*********************************************************************************************
 * Pontificia Universidad Javeriana
 *
 * Materia Sistemas Operativos
 * Docente: J. Corredor, PhD
 * Autor: Xamuel Perez
 * Fecha: 4/11/2025
 * Tema: OpenMP
 *
 * Descripción:
 *  - Introduccion en laboratorio de OPENMP
 *  - Clausulas y directivas para el programa
 *********************************************************************************************/

#include <omp.h>     // Header necesario para invocar API OpenMP
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    // Fijar número de hilos desde argumento
    if (argc != 2) {
        printf("Error \n\t$ ./ejecutable numHilos\n");
    } else {
        int numHilos = atoi(argv[1]);
        int max_hilos = omp_get_max_threads();

        printf("OpenMP ejecutando hilos por cores con %d hilos\n", numHilos);
	//fija el numero de hilos que se desea
        omp_set_num_threads(numHilos);

        #pragma omp parallel
        {
            // Código que será ejecutado por todos los hilos
            printf("Hello World desde el thread %d\n", omp_get_thread_num());
        }
    }

    return 0;
}

