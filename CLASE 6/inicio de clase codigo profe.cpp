#include <stdio.h>

//carga secuencial -> For
//carga aleatoria -> do-while
    //inicializar (-1)

void inicializarNumeros(int numeros[], int tam);
void mostrarNumeros(int numeros[], int tam);
void cargarNumero(int numeros[], int tam);
int buscarLibre(int numeros[], int tam);

int main()
{
    
    int numeros[10];
    int opcion;
    
    inicializarNumeros(numeros, 10);
    
    
    do
    {
        printf("1. Cargar un numero\n");
        printf("2. Mostrar todos los numeros\n");
        printf("10. Salir\n");
        printf("Elija una opcion:");
        scanf("%d", &opcion);
        
        switch(opcion)
        {
            case 1:
                cargarNumero(numeros, 10);
            break;
            case 2:
                mostrarNumeros(numeros, 10);
            break;
        }
        
       
        
    }while(opcion!=10);
    
    

    return 0;
}

void inicializarNumeros(int numeros[], int tam)
{
   int i;
   for(i=0; i<tam; i++)
   {
       numeros[i] = -1;
   }
}

void mostrarNumeros(int numeros[], int tam)
{
    int i;
   for(i=0; i<tam; i++)
   {
       printf("%d\n", numeros[i]);
   }
}

void cargarNumero(int numeros[], int tam)
{
    int i;
    
    int indice;
    
    indice = buscarLibre(numeros, tam);
        
    //(0-9) si hay lugar
    //-1 si no hay lugar
    
    if(indice != -1)
    {
        printf("Ingrese un numero: ");
       scanf("%d", &numeros[indice]);
    }
    else
    {
        printf("No hay mas espacio");
    }
  
  
  
  
  
  
}

int buscarLibre(int numeros[], int tam)
{
    int indice = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(numeros[i] == -1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}



