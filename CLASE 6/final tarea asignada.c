 /*Mostrar por pantalla el apellido y nombre de una persona, respetando el siguiente formato:
  "Scarafilo, Germán Ezequiel". Tener en cuenta: apellido y nombre se ingresan en dos variables 
  distintas que no pueden ser modificadas. El ingreso de datos no tiene ningún formato en particular,
   es decir no se tiene en cuenta mayusculas o minusculas, por lo que su programa deberá hacerlo
    para respetar el formato solicitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	char nombre [15];
	char nombre2 [15];
	char apellido [20];
	int si;
	char final [200];
	
	printf ("\ningrese su primer nombre:");
		fgets(nombre,15,stdin);
		fflush(stdin);
		nombre[0]=toupper(nombre[0]);
		
	printf ("\ningrese su segundo nombre: ");
		fgets(nombre2,15,stdin);
		fflush(stdin);
		nombre2[0]=toupper(nombre2[0]);



	printf ("\ningrese apellido: ");
		
		fgets(apellido,15,stdin);
		fflush(stdin);
		apellido[0]=toupper(apellido[0]);
		
		
		
	printf ("su nombre es %s, %s %s", apellido, nombre, nombre2);
	
	
	
	
	
	
	system ("pause");
	return 0;
}
     
     
     
     

