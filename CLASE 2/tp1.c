/*Pedirle al usuario que ingrese 2 números enteros y que muestre
:La suma de los dos números.Disminuir del segundo,
 el primero.El producto de ambos números.Promedio de ambos números.*/

 int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int producto;
    int promedio;
    int i;

    for(i=0; i<2; i++)
    {
        printf("Ingrese un numero: ");

        scanf("%d", &num1);

        printf("Ingrese otro numero: ");

        scanf("%d", &num2);

        suma = num1 + num2 ;
        resta = num2 - num1;
        producto = num1 * num2;
        promedio = suma/2;



        printf("La suma de los dos números es : %d\n", suma);
        printf("La resta de los dos números es : %d\n", resta);
        printf("El producto de ambos números es : %d\n", producto);
        printf("El promedio de los dos números es : %d\n", promedio);
    }


    return 0;
}
