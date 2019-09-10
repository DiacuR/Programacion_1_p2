#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define T 3
#define LEN 20

/*
menu

alumnos sentados
alumnos mas viejos
nombre de maximo alumno
ordenar alumnos sentados por nombre
*/
int main()
{
    /*char apellido[15] = "rad";
    char nombre[15];
    char apellidoNombre[31];
    char auxString[1000];
    int i;
    int len;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(auxString);

    while(strlen(auxString)>14)
    {
        printf("Reingrese nombre: ");
        fflush(stdin);
        gets(auxString);

    }

    strcpy(nombre,auxString);
*/

    int legajo_alumno[T];
    char nombre_alumno[T][LEN];
    int i;
    int j;
    int auxEnt;
    char auxString[LEN];

    for(i = 0; i < T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo_alumno[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre_alumno[i]);
    }

    for(i = 0; i < T; i++)
    {
        printf("%d\t%s\n", legajo_alumno[i], nombre_alumno[i]);
    }


    for(i = 0; i < T-1; i++)
    {
        for(j = i+1; j < T; j++)
        {
            if(legajo_alumno[i]>legajo_alumno[j])           //Menor a mayor
            {
                auxEnt = legajo_alumno[i];
                legajo_alumno[i] = legajo_alumno[j];
                legajo_alumno[j] = auxEnt;

                strcpy(auxString,nombre_alumno[i]);
                strcpy(nombre_alumno[i],nombre_alumno[j]);
                strcpy(nombre_alumno[j],auxString);
            }
        }
    }

    for(i = 0; i < T; i++)
    {
        printf("\n\n\%d\t%s\n", legajo_alumno[i], nombre_alumno[i]);
    }
    return 0;
}
