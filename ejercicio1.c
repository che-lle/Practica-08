1   /*Yañez Perez Michelle
2   genera la tabla de multiplicar de un número dado*/
3   int main()
4   {
5       int num, cont = 0;
6       printf("\a----- Tabla de multiplicar -----\n");
7       printf("Ingrese un número: \n");
8       scanf("%d" , &num);
9       printf("La tabla de multiplicar del %d es:\n", num);
10      while (++cont <= 10)
11      {
12          printf("%d x %d = %d\n" , num, cont,num*cont);
13          cont++
14      }
15      return 0;
16  }
