#include <stdio.h>
#include <stdlib.h>
void inicializarNumeros (int numeros[],int tam);
void cargaNumeros (int numeros [], int tam);
void mostrarNumeros (int numeros [], int tam);

//creo funcion, devuelve el primer vector que esta en -1
int buscarLibre (int numeros[], int tam);
//tam es tamaño del vector

int main () {


	int numeros [10];
	int opcion;

	inicializarNumeros (numeros,10);
	
	do{
		printf ("1. cargar un numero\n");
		printf ("2.mostrar todos los numeros\n");
		printf("10.salir\n");
		printf ("elija una opcion:");
		scanf ("%d", &opcion);
		
		
		switch (opcion) 
		{
			case 1:
				cargarNumeros(numeros,10);
				break;
			case 2:
				mostrarNumeros (numeros,10);
				break;
		}
		
		
	 }while (opcion !=10);
	
		
	return 0;
	}
	
	void inicializarNumeros (int numeros[],int tam)
	{
		int i;
		for (i=0;i<tam;i++)
		{
			printf ("%d", numeros);
			numeros [i]=-1;
		}
	}
	
	
	void MostrarNumeros (int numeros [], int tam)
	{
		int i;
		for (i=0; i<tam; i++)
		{
			printf ("%d", numeros [i]);
		}
		
	}

	void cargaNumeros (int numeros [0], int tam) 
	{
		
		int i ;
		
		
		//va apreguntar si hay espacio libre en el vector
		
		int indice;
		indice = buscarLibre (numeros,tam);
		
		//posivilidades: indice vale de 0 a 9
		//-1 si no hay lugar
		
		if (indice != -1) {
			printf ("ingrese un munero:");
			scanf ("%d",&numeros [indice]);
			
		}
		else {
			printf ("NO HAY MAS ESPACIO");
		} 
	}
	
	int buscarLibre (int numeros[], int tam)
	{
		int indice =-1;
		int i;
		// va a preumtar si tiee -1, y va a dejar de iterar ahi
		for (i=0; i<tam; i++) {
			
			if (numeros[i]==-1)
			{
				indice =i;
				break;
			}
			
			
			
		}
		return indice;
	}
	

