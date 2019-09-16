#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

#define T 5

///typedef Define tipo de dato

int main()
{
   // int numero;
    //scanf("%d", &numero);
    //printf("El numero es: %d\n", numero);

    int opcion;

    eAlumno listadoDeAlumnos[T];
    inicializarAlumno(listadoDeAlumnos,T);


    printf("Elija una opcion: \n 1.Mostrar\n 2.Cargar\n 3.Buscar\n 4.Borrar");
    scanf("%d", opcion);


    switch(opcion)
        {
        case 1:

            mostrarAlumnos(listadoDeAlumnos,T);
            break;

        case 2:

            hardcodearListadoAlumno(listadoDeAlumnos);

            break;

        case 3:


        }

    indice = dameElIndiceLibre(listadoDeAlumnos,T);

    if(indice != -1)
    {
        listadoDeAlumnos[indice] = unAlumno;
    }
    else
    {
        printf("No hay espacio");
    }


    mostrarAlumnos(listadoDeAlumnos,T);

/*
    printf("Nombre ?\n");
    scanf("%s", unAlumno.nombre);

    printf("Nota ?\n");
    scanf("%d", &unAlumno.nota);

    printf("Legajo ?\n");
    scanf("%d", &unAlumno.legajo);


    printf("\nEl nombre es: %s\n", unAlumno.nombre);
    printf("La nota es: %d\n", unAlumno.nota);
    printf("El legajo es: %d", unAlumno.legajo);

*/

    return 0;
}
