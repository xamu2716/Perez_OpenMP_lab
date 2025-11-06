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
 *  - Ejemplo de uso de variables privadas y compartidas
 *  Se elimina la condición de carrera al hacer 'b' privada
 *********************************************************************************************/


#include <omp.h>    //<------------- Header necesario para invocar API OpenMP
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;// Variable de control para el ciclo
    const int N = 1000;// Tamaño del ciclo
    int a = 50;// Variable compartida, acumulador inicial
    int b = 0;// Variable compartida, guarda el acumulado

    #pragma omp parallel for private(i) private(a) private(b)//<----- Directiva para paralelizar el ciclo for
    for (i=0; i<N; i++){// Ciclo for paralelo
        b = a + i;// Operación que cada hilo realizará
    }
    //Se elimina la condición de carrera al hacer 'b' privada
    printf("a = %d b = %d (Se espera a=50 b = 1049)\n", a,b);
    return 0;
}

