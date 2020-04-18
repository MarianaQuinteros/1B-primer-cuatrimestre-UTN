
#include <stdio.h>
#include <stdlib.h>
#include "utn1.h"

int main (void) {


 	int edad;
	int respuesta;
	char letra;

	respuesta = utn1_getCaracter (&letra, "ingrese una letra: \n", "ERROR ingrese una letra entre A y J: \n", 'A', 'J', 1);


	if (respuesta == 0)
	{
		printf ("\nla letra es: %c ", letra);
	}
	else
	{
		printf ("ERROR");
	}


	respuesta = utn1_getNumero (&edad, "ingrese su edad: ", "ERROR ingrese una edad entre 0 y 199: \n", 0, 199, 2);


	if (respuesta == 0)
	{
		printf ("\nla edad es: %d ", edad);
	}
	else
	{
		printf ("ERROR");
	}
		return EXIT_SUCCESS;

}




