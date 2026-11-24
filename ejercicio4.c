1   /*Yañez Perez Michelle
2   Este programa genera un arreglo unidimensional de 5 elementos */
3
4   #include <stdio.h>
5   int main ()
6   {
7       int enteroNumAlumnos = 5;
8       float realCalif = 0.0, realPromedio = 0.0;
9       printf("\tPromedio de calificaciones\n");
10      for (int indice = 0 ; indice < enteroNumAlumnos ; indice++)
11      {
12
13          printf("\nIngrese la calificación del alumn %d\n", indice+1);
14          scanf("%f",&realCalif);
15          realPromedio += realCalif; //simplificar la expresion es decir promedio real es igual a real calif más real calif
16      }
17      printf("\nEl promedio de las calificaciones ingresadas es: %f\n",
18      realPromedio/enteroNumAlumnos);
19      return 0;
20  }
