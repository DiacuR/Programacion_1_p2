#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pVec;
    int i;
    int* aux;


//  pVec = (int*) malloc(sizeof(int)*5);
    pVec = (int*) calloc(sizeof(int),5);


//Ingresar dato por puntero
    for(i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVec + i);
    }
/*
Asignar a puntero
    for(i = 0; i < 5; i++)
    {
        *(pVec + i) = i + 1;
    }
*/


//Mostrar valor de vector de punteros
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(pVec + i));
    }




    printf("\nAgrego 5 mas\n");

    aux = (int*) realloc(pVec,sizeof(int)*10);

    if(aux != NULL)
    {
        pVec = aux;

        for(i = 5; i < 10; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", pVec + i);
        }

        for(i = 0; i < 10; i++)
        {
            printf("%d\n", *(pVec + i));
        }


        printf("\nLo achico\n");
        pVec = (int*)realloc(pVec,sizeof(int)*4);   //En el segundo parametro va la cantidad total que queres reservar en el heap

        for(i = 0; i < 10; i++)
        {
            printf("%d\n", *(pVec + i));
        }
    }

    return 0;
}
