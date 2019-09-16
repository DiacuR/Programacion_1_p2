#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"


void inicializarAlumno(eAlumno listadoDeAlumnos[],int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        listadoDeAlumnos[i].estaVacio = 1;
    }
}

void mostrarAlumnos(eAlumno listado[], int tam)
{
    int i;
    int flag = 0;
    for(i = 0; i < tam; i++)
    {
        if(listado[i].estaVacio == 0)
        {
            mostrarUnAlumno(listado[i],i);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("No hay  alumnos\n\n");
    }
}

void mostrarUnAlumno(eAlumno alumno, int indice)
{
    printf("Alumno %d\nNombre: %s \tNota %d\t Legajo %d \n"
            , indice + 1, alumno.nombre, alumno.nota, alumno.legajo);
}


int dameElIndiceLibre(eAlumno listado[], int tam)
{
    int i;
    int indiceVacio = -1;

    for(i = 0; i < tam; i++)
    {
        if(listado[i].estaVacio == 1)
        {
            indiceVacio = i;
            break;
        }

    }
        return indiceVacio;
}

void hardcodearListadoAlumno(eAlumno listado[])
{
    int i;
    char nombre[][20] = {"Juan","Lucia","Ivan"};
    int nota[3] = {5,8,7};
    int legajo[3] = {1000,1001,1002};


    for(i = 0; i < 3; i++)
    {


        listado[i].estaVacio = 0;
        strcpy(listado[i].nombre,nombre[i]);
        listado[i].nota = nota[i];
        listado[i].legajo = legajo[i];
    }
}
