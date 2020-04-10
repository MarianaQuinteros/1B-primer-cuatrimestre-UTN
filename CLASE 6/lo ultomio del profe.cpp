#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ajustarString(char cadena[]);
int main()
{
    char palabra1[20];
    char palabra2[20]=" ladra";
    int largo;
    int comp;



    printf("Ingrese una palabra: ");
    //__fpurge(stdin);
    fflush(stdin);
    //gets(palabra1); //windows
    fgets(palabra1, 20, stdin);//Linux
    ajustarString(palabra1);
    //strlen
    /*largo = strlen(palabra1);
     printf("Largo2: %d\n", largo);


     printf("la palabra es: %s",palabra1);
    */
    /*strcpy(destino, origen)
    strcpy(palabra2,palabra1);
p-P

    puts(palabra2);*/

/*
    comp = stricmp(palabra1,"perro");

    printf("comp %d", comp);*/


    //strupr(palabra1);
    //strlwr(palabra1);
strcat(palabra1,palabra2);
  puts(palabra1);
  
  
  
  //---------------------------------------//
  
  /*nombre -> leer
  apellido -> leer
  
  apellidoYnombre
  
  "Scarafilo, German Ezequiel"
  */
  
  
  
    return 0;
}

void ajustarString(char cadena[])
{
    int largo;

    largo = strlen(cadena);
    cadena[largo-1]='\0';


}



