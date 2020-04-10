 /*Mostrar por pantalla el apellido y nombre de una persona, respetando el siguiente formato:
  "Scarafilo, Germán Ezequiel". Tener en cuenta: apellido y nombre se ingresan en dos variables 
  distintas que no pueden ser modificadas. El ingreso de datos no tiene ningún formato en particular,
   es decir no se tiene en cuenta mayusculas o minusculas, por lo que su programa deberá hacerlo
    para respetar el formato solicitado.*/
    
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char nombre [15];
	char nombre2 [15];
	char apellido [20];
	int si=0;
	
	printf ("\ningrese su primer nombre:");
	gets(nombre);
	fflush(stdin);
	
	print ("\ntiene segundo nombre: [si=1 no=0]");
	scanf ("%i",si);
	
	if (si == 1) {
		
		printf ("\ningrese su segundo nombre: ");
		gets(nombre2);
	}
	
	printf ("\ningrese apellido: ");
	gets(apellido);
	
	 strupr(nombre);
	printf("%s",nombre);
	
	
	
	
	
	
	system ("pause");
	return 0;
}
     
