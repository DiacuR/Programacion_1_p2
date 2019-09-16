#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio;      // 0 Para no. 1 Esta vacio

}eAlumno;

void inicializarAlumno(eAlumno listadoDeAlumnos[],int tam);

void mostrarAlumnos(eAlumno listado[], int tam);

void mostrarUnAlumno(eAlumno alumno, int indice);

int dameElIndiceLibre(eAlumno listado[], int tam);

void hardcodearListadoAlumno(eAlumno listado);



#endif // ALUMNO_H_INCLUDED
