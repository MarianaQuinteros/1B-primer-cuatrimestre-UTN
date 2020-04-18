#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main (void) {
	
	
	float resultado;
	int numero1;
	int numero2;
	int respuesta;
	
	printf ("ingrese un numero:");
	scanf ("%d",&numero1);
	
	printf ("ingrese un numero:");
	scanf ("%d",&numero2);
	
	respuesta = dividir (&resultado, numero1, numero2);
	if (respuesta ==0) 
	{
		printf ("el resultado es: %f:", resultado);
	}
	else 
	{
		printf ("no es posivble diviirid");
		}	
	
	
	
	return EXIT_SUCCESS;
}




