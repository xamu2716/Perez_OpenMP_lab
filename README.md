# 🚀 Perez_OpenMP_lab

## 🌟 Introducción
Colección de laboratorios sobre OpenMP para la materia Sistemas Operativos.  
Los ejercicios muestran paralelización básica, variables privadas/compartidas, reducción y medición de tiempos.

---

## 📋 Contenido del repositorio
- lab01.c  — Hello world con OpenMP (mostrar hilos disponibles).
- lab02.c  — Ejemplo de paralelización simple con número de hilos desde argumento.
- lab03.c  — Ejemplo que ilustra condición de carrera (variables privadas/compartidas).
- lab04.c  — Uso correcto de variables privadas para evitar condición de carrera.
- lab05.c  — Cálculo paralelo de una sumatoria basada en sin(), medición de tiempo y reducción.
- Makefile — Reglas para compilar cada laboratorio.

---

## 🛠 Requisitos
- Sistema: Linux
- Compilador: GCC con soporte OpenMP
- Librerías: math.h (usar flag -lm)

---

## ⚙️ Compilación
Usar el Makefile:
```bash
make lab01
make lab02
make lab03
make lab04
make lab05
```

Compilación manual (ejemplo lab05):
```bash
gcc -fopenmp -lm lab05.c -o lab05
```

---

## ▶️ Ejecución
lab02 (ejemplo con 4 hilos):
```bash
./lab02 4
```

lab05 (ejemplo con 8 hilos):
```bash
./lab05 8
```

Salida esperada (formato):
- Number of threads is: <N>
- The sum is: <valor>
- Time elapsed : <segundos> secs

---

## 🔍 Notas sobre resultados numéricos
- La suma en punto flotante no es estrictamente asociativa: pequeñas diferencias pueden aparecer según el número de hilos o schedule.  
- Para comparar, ejecutar una versión secuencial o imprimir mayor precisión (%.12f) antes de concluir que hay error.

---

## 📝 Ejemplo rápido (lab05)
Compilar:
```bash
make lab05
```
Ejecutar:
```bash
./lab05 4
```
Ejemplo de salida:
```plaintext
Number of threads is: 4
The sum is: 1.60
Time elapsed : 0.123456789 secs
```

---

## 👨‍💻 Autor
Xamuel Perez  
Fecha: 06/11/2025  
Asignatura: Sistemas Operativos — Laboratorio OpenMP

---
