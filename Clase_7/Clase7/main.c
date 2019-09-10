#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Tarea:

    char nombre[15];                No se pueden modificar.
    char apellido[15];              No se puede modificar.
    char apellidoNombre[15];        Va a guardar el apellido primer letra mayus igual con nombre.

*/
int main()
{
    char palabra[10];
    int largo;

    printf("Ingrese palabra: ");
    fflush(stdin);

    //scanf("%s", palabra);       //No sirve para guardar cadena de caracteres con espacio.
    //gets(palabra);              //Se puede escribir con espacios. El problema es que puede desbordar.
    fgets(palabra,10,stdin);    //1er parametro: lugar donde guardar la cadena. 2do cant de caracteres. 3er de donde leer la
                                //cadena desde el buffer
    //scanf("%[^\n]", palabra);   //Lee hasta el enter (\n).


    largo = strlen(palabra);            //Devuelve el tamaño de la cadena.

    printf("\nEl largo es: %d", largo);

    palabra[largo-1] = '\0';

    largo = strlen(palabra);            //Devuelve el tamaño de la cadena.

    printf("\nEl largo es: %d", largo);

    printf("%s", palabra);




    strcmp();                //Cuando devuelve 0 son iguales. Cuando devuelve
                            //-1 es que es que las variables estan guardadas en orden alfabetico.

    stricmp();              //No discrimina entre mayus y minus.

    return 0;
}
