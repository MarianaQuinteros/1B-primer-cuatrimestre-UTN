#include <stdio.h>
#include <stdlib.h>




//prototipos de variables
int sumar(int num1,int num2);
int restar (int num1,int num2);
float dividir (int num1, int num2);
int mult (int num1,int num2);




int main () {
	
	int num1;
	int num2;
	char operacion;
	int suma;
	int resta;
	int multip;
	float division;
	
	
	printf ("ingrese un numero");
	scanf ("%d",&num1);
	
	do {
		printf ("\ningrese una operacion SOLO +,-,*,/  : ");
		scanf ("%c",&operacion);
		
	}while (operacion!='/' && operacion !='*' && operacion !='-' && operacion !='+');
	
		
	if (operacion =='+') {
		
		printf ("\ningrese un numero");
		scanf ("%d",&num2);
		
		suma = sumar( num1, num2);
		printf ("La SUMA es: %d",suma);
	}
	else {
		if (operacion == '-') {
			
			printf ("\ningrese un numero\n");
			scanf ("%d",&num2);
			
			resta = restar (num1,num2);
			printf ("La RESTA es: %d",resta);
		}
		else {
			if (operacion == '*') {
				
					
				printf ("\ningrese un numero\n");
				scanf ("%d",&num2);
			
				multip = mult (num1,num2);
				printf ("\nLa MULTIPLICACION es: %d\n",multip);
			}
			else {
					
				printf ("\ningrese un numero\n");
				scanf ("%d",&num2);
				division = dividir (num1, num2);
				
				if ( num2==0) {
					printf ("NO SE PUEDE DIVIDIR POR 0\n");
				}
				else{
					division = dividir (num1,  num2);
					printf ("La division es: %f\n",division);
				}
				
			
			}
		}
	}
	
	
	
	
	
	system ("pause");
	return 0;
}


int sumar(int num1,int num2){
	int result;
	
	result = num1 + num2;
	return result;	
	
}  


int restar (int num1,int num2){
	int result;
	
	result = num1 - num2;
	return result;	
}


float dividir ( int num1, int num2){
	int result;
	
	if (num1>num2) {
		result = (float)num1 / num2;
		return result;
	} 
}
int mult (int num1,int num2){
	int result;
	
	result = num1 * num2;
	return result;	
}






