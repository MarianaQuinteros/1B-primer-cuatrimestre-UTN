#include <stdio.h>
#include <string.h>
int main () {


char palabra1 [20] ;

int largo; 



printf ("ingrese una palabra");
scan ("%c",palabra1);
fflush (stdin);

puts (palabra1);

printf ("la palabra es: %c",palabra1);


//CUENTA LA CANT DE CARACTERES
largo = strlen (palabra1);
printf ("Largo: %d\n",largo);

largo =palabra1 [largo-1]= '\0';

printf ("Largo2: %d\n",largo);

return 0;


}
