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

#include <omp.h>    //<------------- Header necesario para invocar API OpenMP
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    const int N = 1000;
    int a = 50;
    int b = 0;

    #prgma omp parallel for private(i) private(a)
    for (i=0; i<N; i++){
        b = a + i;
    }

    printf("a = %d b = %d (Se espera a=50 b = 1049)\n", a,b);
    return 0;
}

