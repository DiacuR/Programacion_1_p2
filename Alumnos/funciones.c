#include "prototipos.h"
#define LIBRE 0
#define OCUPADO 1


void inicializarAlumnos(eAlumno listaDeAlumnos[],int cantidad,int estado)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        listaDeAlumnos[i].estaVacio=estado;
    }
}

int cargarAlumnos (eAlumno listaDeAlumnos[],int cantidad)
{

    int indice;
    int sePudo=0;
    indice=dameIndiceLibre(listaDeAlumnos,cantidad);
    if (indice!=-1)
    {
        sePudo=1;
        listaDeAlumnos[indice]=cargarAlumno();
    }
    return sePudo;
}


int listarAlumnosConLocalidad(eAlumno listaDeAlumnos[],int cantidad,eLocalidad listaDeLocalidades[],int tl)
{
    int i;
    int tieneAlumnos=0;
    eLocalidad Localidad;
    int index;
     printf("\nLegajo\t\tNombre\t\tNota\tLocalidad \n");
    for (i=0;i<cantidad;i++)
    {
          index=buscarLocalidadPorId(listaDeLocalidades,tl,listaDeAlumnos[i].idLocalidad);
         if(listaDeAlumnos[i].estaVacio==OCUPADO)
        {
            Localidad=listaDeLocalidades[index];
            tieneAlumnos=1;
            mostrarAlumno(listaDeAlumnos[i],Localidad);
        }
    }
    return tieneAlumnos;
}


void mostrarAlumno(eAlumno alumno, eLocalidad localidad)
{
    printf ("\n%d",alumno.legajo);
    printf("\t\t%s",alumno.nombre);
    printf("\t\t%d",alumno.nota);
    printf("\t\t%s",localidad.localidad);
}


int dameIndiceLibre(eAlumno listaDeAlumnos[],int cantidad)
{
    int i;
    int indiceLibre=-1; //fuera de incide, fuerra del array
    for(i=0; i<cantidad; i++)
    {
        if(listaDeAlumnos[i].estaVacio==LIBRE)
        {
            indiceLibre=i;
            break;
        }
    }
    return indiceLibre;

}

void hardcodearLocalidad(eLocalidad Localidades[],int tam)
{
    int i;
    char nombresLocalidad[][20]={"Monserrat","Avellaneda","San Telmo"};
    int id[]={1,2,3};
    int codigoPostal[]={1999,1095,1785};

    for(i=0;i<tam;i++)
    {
        strcpy(Localidades[i].localidad,nombresLocalidad[i]);
        Localidades[i].id=id[i];
        Localidades[i].codigoPostal=codigoPostal[i];
    }

}

void hardcodearAlumno(eAlumno alumnos[],int tam)
{
    int i;
    char nombres[][20]= {"jean","Thomas","brian","flor","pipo"};
    int notas[]= {10,7,8,9,5};
    int legajos[]= {14,54,77,22,1};
    int idLocalidades[]={1,1,2,3,1}; //se hardcodea solo el ID. y en otra funcion se hardcodea las localidades.

    for(i=0; i<tam; i++)
    {
        strcpy(alumnos[i].nombre,nombres[i]);
        alumnos[i].nota=notas[i];
        alumnos[i].legajo=legajos[i];
        alumnos[i].idLocalidad=idLocalidades[i];
        alumnos[i].estaVacio=OCUPADO;
    }
}

int buscarAlumno(eAlumno alumnos[],int cantidad)
{
    int i;
    int numero;
    int loEncontre=-1;
    numero=pedirEntero("\n\nIngrese el legajo a buscar: ");
    for(i=0; i<cantidad; i++)
    {
        if(numero==alumnos[i].legajo && alumnos[i].estaVacio==OCUPADO)
        {
            loEncontre=i;
        }
    }
    return loEncontre;
}

int buscarLocalidadPorId(eLocalidad localidad[],int tl,int idLocalidad)
{
    int i;
    int index=-1;
    for(i=0;i<tl;i++)
    {
        if (localidad[i].id==idLocalidad)
        {
            index=i;
        }
    }
    return index;
}

void pedirString (char mensaje[],char contenido[], char mensajeDeError[])
{
    char auxString[100];
    printf("%s",mensaje);
    fflush(stdin);
    gets(auxString);
    while(strlen(auxString)>50)
    {
        char auxString[100];
        printf(mensajeDeError,mensaje);
        fflush(stdin);
        gets(auxString);
    }
    strcpy(contenido,auxString);
}

int pedirEntero (char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);

    return numero;
}

int modificarAlumno(eAlumno alumnos[],int cantidad,eLocalidad listaDeLocalidades[],int tl)
{
    int seModifico=0; //0 si no se pudo borrar, 1 si se pudo borrar
    int alumnoAModificar;
    int nota;
    int opcion;
    int index;
    char nombre[50];
    char respuesta;
    eAlumno auxAlumno;
    eLocalidad auxLocalidad;

    alumnoAModificar=buscarAlumno(alumnos,cantidad);
    auxAlumno = alumnos[alumnoAModificar];
    if(alumnoAModificar!=-1)
    {
            seModifico=1;

            printf("\nEl alumno a Modificar es: \n");
            mostrarAlumno(alumnos[alumnoAModificar],listaDeLocalidades[alumnoAModificar]);
            opcion=pedirEntero("\n Que dato desea modificar?\n1. Nombre\n2. Nota\n Ingrese una opcion: ");
            switch(opcion)
            {
            case 1:
                pedirString("Ingrese nuevo nombre: ",nombre,"Error, reingrese un nombre valido (maximo 50 caracteres)");
                strcpy(auxAlumno.nombre,nombre);
                break;
            case 2:
                nota=pedirEntero("Ingrese una nueva nota: ");
                auxAlumno.nota=nota;
                break;
            case 3:
                printf("Saliendo...");
                break;
            default:
                printf("Opcion no valida");
            }
            if(seModifico==1)
            {
                printf("\nEl alumno a modificar va a quedar de la siguiente manera: ");
                mostrarAlumno(auxAlumno,auxLocalidad);
                printf("\nDesea guardar los cambios? 's' para guardar.");
                respuesta=getchar();
                if(respuesta=='s')
                {
                    alumnos[alumnoAModificar]=auxAlumno;
                }
                else
                {
                    printf("\nNo se realizo la modificacion");
                }
            }

    }
    return seModifico;
}

int borrarAlumno (eAlumno alumnos[], int cantidad,eLocalidad localidades[],int tl)
{

    int seBorro=0; //0 si no se pudo borrar, 1 si se pudo borrar
    int alumnoABorrar;
    alumnoABorrar=buscarAlumno(alumnos,cantidad);
    if(alumnoABorrar!=-1)
    {
            seBorro=1;
            alumnos[alumnoABorrar].estaVacio=LIBRE;
            printf("\nEl alumno a borrar es: \n");
            mostrarAlumno(alumnos[alumnoABorrar],localidades[alumnoABorrar]);
    }
    return seBorro;
}

eAlumno cargarAlumno (void)
{
    eAlumno miAlumno;
    printf("\nIngrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("\nIngrese nota: ");
    scanf("%d",&miAlumno.nota);
    miAlumno.estaVacio=OCUPADO;

    return miAlumno;
}

int buscarCantAlumnosPorLocalidad(eAlumno listadoAlum[], int tamAlum, eLocalidad listadoLoc[], int tamLoc,eContador contador[], int tamCont)
{
    int i,j;
    int contadorAvell = 0;

    for(i = 0; i < tamAlum; i++)
    {
        for(j = 0; j < tamLoc; j++)
        {
            if(listadoAlum[i].idLocalidad == contador[j].idLocalidad)
            {
                contador[j].cantALumnos++;
                if(j == 2)
                {
                    contadorAvell++;
                }
            }
        }
    }


    for(i = 0; i < tamLoc; i++)
    {
        for(j = 0; j < tamLoc; j++)
        {
            if(listadoLoc[i].id == contador[j].idLocalidad)
            {
                printf("\nLa localidad %s tiene %d alumnos\n", listadoLoc[i].localidad, contador[j].cantALumnos);
            }
        }
    }

    for(i = 0; i < tamLoc; i++)
    {
        contador[i].cantALumnos = 0;
    }
}

int hardcodearContador(eContador contador[], int tamCont)
{
    int i;

    int id[]= {1,2,3} ;

    for(i = 0; i < tamCont; i++)
    {
        contador[i].idLocalidad = id[i];
    }
    return 1;
}

void inicializarContador(eContador contador[],int tamCont)
{
    int i;

    for(i = 0; i < tamCont; i++)
    {
        contador[i].cantALumnos = 0;
        contador[i].idLocalidad = 0;
    }
}

void mostrarTodos(eAlumno alumnos[], int tamAlum, eLocalidad localidad[], int tamLoc)
{
    int i;

    for(i = 0; i < tamAlum; i++)
    {
        listarAlumnosConLocalidad(alumnos,tamAlum,localidad,);

    }
}
