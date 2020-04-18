#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	int edad;
	char letra;
	int respuesta;

	respuesta = utn_getCaracter(&letra,"Letra?\n","\nError la letra debe ser desde A a J\n",'A','J',1);
	if(respuesta == 0)
	{
		printf("\nLa letra es %c\n",letra);
	}
	else
	{
		printf("\nERROR\n");
	}




	respuesta = utn_getNumero(&edad,"Edad?\n","Error la edad debe ser desde 0 a 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("\nLa edad es: %d\n",edad);
	}
	else
	{
		printf("\nERROR\n");
	}


	return EXIT_SUCCESS;
}

