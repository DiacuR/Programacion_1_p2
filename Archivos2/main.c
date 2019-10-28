#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    float salario[];
}eEmpleado;

eEmpleado* new_empleado();

int main()
{
    FILE* pArchivo;
    char linea[20];
    char legajo[20];
    char nombre[20];
    char apellido[20];
    char sueldo[20];
    int i;
    eEmpleado* lista[50];
    eEmpleado* unEmpleado;


    while(!feof(pArchivo))
    {
        pArchivo = fopen("datos.csv","r");

        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo, nombre, apellido, sueldo);

        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo, nombre, apellido, sueldo);


        unEmpleado->id = atoi(legajo);
        strcpunEmpleado->nombre, nombre);
        unEmpleado->apellido=nombre;
        unEmpleado->salario= atof(sueldo);


        lista[i] =  unEmpleado;
        i++;



    }

        fclose(pArchivo);

        for(i = 0; i <50;i++)
        {
            printf("%d----%s---%s----%f",lista[i]->id, lista[i]->nombre, lista[i]->apellido, lista[i]->salario);
        }
    return 0;
}


eEmpleado* new_empleado()
{
    eEmpleado *empleado;

    empleado = (void*)malloc(sizeof(eEmpleado));


    return empleado;
}
