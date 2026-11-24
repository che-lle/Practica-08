1   /*Yañez Perez Michelle
2   Este programa genera un ciclo infinito */
3
4   #include <stdio.h>
5   int main()
6   {
7       /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
8       El siguiente es un ciclo infinito porque la condición siempre es verdadera.
9       Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
10      opcionales.*/
11      while (100)
12      {
13          printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
14      }
15      return 0;
16  }
