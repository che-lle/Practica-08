1   /*Yañez Perez Michelle
2   Este programa define un valor por defecto para el tamaño del arreglo de tal manera que
3   si el tamaño de éste cambia, solo se debe modificar el valor de la constante MAX. */
4
5   #include <stdio.h>
6   #define MAX 5
7   int main ()
8   {
9       int arreglo[MAX], cont; //arreglo es un conjunto de variables en un contenedor, estan dados por un indice que identifica a cada uno de las casillas
10      for (cont=0; cont<MAX; cont++) //el contador va indicar el numero de la caja del contenedor desfazado por 1. Se llena al arreglo por elementos uno por uno
11      {
12          printf("Ingrese el valor %d del arreglo: ", cont+1);
13          scanf("%i", &arreglo[cont]);
14      }
15
16      printf("El valor ingresado para cada elemento del arreglo es:\n[");
17      for (cont=0; cont<MAX; cont++)
18      {
19          printf("%d\t", arreglo[cont]);
20      }
21      printf("]\n");
22      return 0;
23  } //Este ejercicio es la unica forma de imprimir los arreglos
