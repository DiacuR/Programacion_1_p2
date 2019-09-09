#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 5

/*
    Parcial 1/10 Laboratorio PrimerParte(ABM)
            8/10             SegundaParte(Filtros)
*/

int main()
{
    int maximo;
    int minimo;
    int sillas[TAM];
    int edades[TAM];
    int sillaOcupada;

    inicializarArray(sillas,TAM,-1);

    mostrarArray(sillas,TAM);



    harcodearDatos(sillas,TAM);
    hardcodearEdades(edades,TAM);



    mostrarArray(sillas,TAM);

    sillaOcupada = ocuparSilla(sillas,TAM,3,999);

    maximo = dameMaximo(sillas,TAM);

    printf("El maximo es: %d\n\n", maximo);


    mostrarDatos(sillas[TAM],TAM,edades[TAM]);
//    minimo = dameMinimo(sillas,TAM);



    return 0;
}
