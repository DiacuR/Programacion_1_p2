#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct{
    int idLocalidad;
    int cantALumnos;
}eContador;

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
   char nombre[50];
   int nota;
   int legajo;
   int estaVacio;// 0 para esta vacio, 1 para no esta vacio
   int idLocalidad;
}eAlumno;

typedef struct{
    int id;
    char localidad[30];
    int codigoPostal;
}eLocalidad;

typedef struct{
    int idMateria;
    char descripcion[30];
    int cargaHoraria;

}eMaterias;

typedef struct{
    int legajo;
    char idMateria;
    eFecha fechaDeInscripcion;
    int estado;
}eInscripcion;



void inicializarAlumnos(eAlumno[],int cantidad);
void hardcodearAlumno(eAlumno[],int cantidad);
int listarAlumnosConLocalidad(eAlumno listaDeAlumnos[],int cantidad,eLocalidad listaDeLocalidades[],int tl);
void mostrarAlumno(eAlumno,eLocalidad);
int dameIndiceLibre(eAlumno[],int cantidad);
int cargarAlumnos (eAlumno listaDeAlumnos[],int cantidad);
void pedirString (char mensaje[],char contenido[],char mensajeDeError[]);
int pedirEntero (char mensaje[]);
int buscarAlumno(eAlumno[],int cantidad);
int borrarAlumno(eAlumno[],int cantidad, eLocalidad[],int tl);
eAlumno cargarAlumno (void);
int modificarAlumno(eAlumno[],int cantidad,eLocalidad listaDeLocalidades[],int tl);
int buscarLocalidadPorId(eLocalidad listaDeLocalidades[],int tl,int idLocalidad);

int buscarCantAlumnosPorLocalidad(eAlumno listadoAlum[], int tamAlum, eLocalidad listadoLoc[], int tamLoc, eContador contador[], int tamCont);
int hardcodearContador(eContador contador[], int tamCont);
void inicializarContador(eContador contador[],int tamCont);



void harcodearMaterias(eMaterias listado[],int tam);
void mostrarMaterias(eMaterias listado[], int tam);
void altaInscripcion(eAlumno listadoDeAlum[], int tamAlu, eMaterias listadoDeMaterias[], int tamMat, eInscripcion listadoDeInscripcion[], int tamInsc, eLocalidad listLocalidad[], int tamLoc);
int dameIndiceInscripcion(eInscripcion listado[], int tam);
