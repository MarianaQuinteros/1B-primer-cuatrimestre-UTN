#include <stdio.h>

int main()
{
  int numero1;
   int numero2;

   int suma;
   int resta;
   int producto;
   float promedio;

   numero1 = (int)promedio;

   printf ("ingrese un numero: ");
   scanf("%d", &numero1);

    printf ("ingrese otro numero: ");
        scanf("%d", &numero2);

    suma = numero1 + numero2 ;
    resta = numero1 - numero2;
    producto = numero1 * numero2;
    promedio = (float)suma/2;

    printf("La suma de los dos n�meros es : %d\n", suma);
    printf("La resta de los dos n�meros es : %d\n", resta);
    printf("El producto de ambos n�meros es : %d\n", producto);
    printf("El promedio de los dos n�meros es : %f\n", promedio);




    return 0;


}
