#include <stdio.h>
#include <stdlib.h>


void inicializarArray(int array[], int tam, int numeroInicial)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        array[i] = numeroInicial;
    }
}

void harcodearDatos(int array[], int tam)
{
    int i;

    int hardcodeoSillas[] = {55,11,33,22,44};

    for(i = 0; i < tam; i++)
    {
        array[i] = hardcodeoSillas[i];
    }

}


void hardcodearEdades(int array[],int tam)
{
    int i;
    int hardcodeoEdades[] = {18,19,81,91,98};

    for(i = 0; i < tam; i++)
    {
        array[i] = hardcodeoEdades[i];
    }
}




void mostrarArray(int array[], int tam)
{
    int i;

    for(i = 0; i<tam; i++)
    {
        printf("%d\n", array[i]);
    }

}


int dameMaximo(int array[],int tam)
{
    int i;
    int maximo;

    for(i = 0; i < tam; i++)
    {

        if(i == 0 || array[i] > maximo)
           {
                maximo = array[i];
           }
    }

    return maximo;
}



int estaLibre(int arraySillas[],int tam,int laSilla,int valorInicial)
{
    int retorno = 0;
    int i;

        if(arraySillas[laSilla] == valorInicial)
        {
            retorno = 1;
        }

    return retorno;
}

int ocuparSilla(int arraySillas[],int tam,int laSilla,int legajo)
{
    int retorno= -1;
    int i;
    int estaLibreSilla;

    if(laSilla < tam)
    {
        estaLibreSilla = estaLibre(arraySillas,tam,laSilla,-1);

        if(estaLibreSilla == 1)
        {
            arraySillas[laSilla] = legajo;
            retorno = 1;
        }
    }
    return retorno;
}

int indiceSillaLibre(int arraySillas[], int tam)
{
    int i;
    int indice;

    for(i = 0; i < tam; i++)
    {
        if(arraySillas[i] == -1)
        {
            indice = i;
            break;
        }
    }

    return indice;
}


void mostrarDatos(int arraySillas[],int tamSillas, int arrayEdades[])
{
    int i;

    for(i = 0; i < tamSillas; i++)
    {
        printf("Legajo: %d\n\nEdad: %d\n", arraySillas[i],arrayEdades[i]);
    }
}

void mostrarMaximosDatos(int arraySillas[], int tamSillas, int arrayEdades[], int tamEdades)
{

}

