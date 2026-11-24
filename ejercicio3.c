1   /*Yañez Perez Michelle 
2   Este programa obtiene el promedio de calificaciones ingresadas por el usuario. Las
3   calificaciones se leen desde la entrada estándar (teclado). La inserción de calificaciones
4   termina cuando el usuario presiona una tecla diferente de ‘S’ o ‘s’. */
5
6   #include <stdio.h>
7   int main ()
8   {
9       char op = 'n';
10      double sum = 0, calif = 0;
11      int veces = 0;
12      do
13      {
14          printf("\tSuma de calificaciones\n");
15          printf("Ingrese la calificación:\n");
16          scanf("%lf", &calif);
17          veces++;
18          sum = sum + calif;
19          printf("¿Desea sumar otra? S/N\n");
20          setbuf(stdin, NULL); // limpia el buffer del teclado
21          scanf("%c",&op); // continua el ciclo
22          getchar(); // no sigue el ciclo
23      }
24      while (op == 'S' || op == 's');
25
26      printf("El promedio de las calificaciones ingresadas es: %lf\n", sum/veces);
27      return 0;
28  }
