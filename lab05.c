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
 *  - Calculo de la sumatoria de la funcion SENO
 *  - Para compilar se hace uso del FLAG
 *	interfaz matematica del GCC
 *********************************************************************************************/
#include <omp.h>     // Header necesario para invocar API OpenMP
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

double f(int i) {
    int j;
    int start = i * (i + 1) / 2;
    int finish = start + 1;
    double return_val = 0;
    for (j = start; j < finish; j++)
        return_val += sin(j);
    return return_val;
}

int main(int argc, char *argv[]) {
    double sum = 0;
    int i, n = 30000;

    if (argc != 2) {
        printf("Error \n\t$ ./ejecutable numHilos\n");
        exit(0);
    }

    int numHilos = atoi(argv[1]);
    omp_set_num_threads(numHilos);

    #pragma omp parallel
    {
        int threads = omp_get_num_threads();
        int max_hilos = omp_get_max_threads();
        #pragma omp master
         printf("OpenMP ejecutando hilos por cores con %d hilos (máximo %d)\n", threads, max_hilos);

        #pragma omp for reduction(+ : sum)
        for (i = 0; i < n; i++) {
            sum += f(i);
        }
    }

    printf("La sumatoria es: %.2f\n", sum);

    return 0;
}

