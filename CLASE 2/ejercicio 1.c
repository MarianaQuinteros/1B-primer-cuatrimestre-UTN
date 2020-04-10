/*Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*/


#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int i;
	int max;
	int min;
	int contador=0;
	int acumulador=0;
	float promedio; 
	int num;
	
	for (i=0;i<5;i++) {
		
		printf ("ingrese un numero:");
		scanf ("%d",&num);
		
		contador++;
		acumulador +=num;
		
		if (i==0) {
			max= num;
			min=num;
		}
		else {
			if (num>max) {
				max=num;
			}
			if (num < min) {
				min = num;
			}
		}
	
	}
	
	promedio = acumulador/contador;
	
	printf ("El promedio es: %f \n El num maximo es: %d \n El num minimo es: %d\n", promedio,max,min);
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
