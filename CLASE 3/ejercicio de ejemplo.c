#include <stdio.h>
#include <stdlib.h>

?
?
int dividir(int operador1, int operador2,float* direccionDeVariableDeRetorno);
?
int main(void)
{
	setbuf(stdout,NULL);
?
	int a=27;
	int b=2;
	float resultado;
	int retHuboError;
?
	printf("la direccion de resultado en el main es: %d\n",&resultado);
?
?
	retHuboError = dividir(a,b,&resultado);
	if(retHuboError==1)
	{
		printf("no se puede dividir");
	}
	else
	{
		printf("resultado:%f",resultado);
	}
?
?
?
    return EXIT_SUCCESS;
}
?
int dividir(int operador1, int operador2,float* direccionDeVariableDeRetorno)
{
	float resul;
	int huboError;
?
	printf("la direccion de resultado en funcion dividir es: %d",direccionDeVariableDeRetorno);
?
	if(operador2!=0)
	{
		resul =  (float)operador1 / operador2;
		// escribir en la direccion direccionDeVariableDeRetorno el resultado de la division "resul"
		// HACER (ni idea como)
?
		//escribimeEnLamemoriaEsto(direccionDeVariableDeRetorno,resul);
		(*direccionDeVariableDeRetorno) = resul;
?
		huboError=0;//no hubo error
	}
	else
	{
		huboError=1;//hubo error
	}
	return huboError;
}

