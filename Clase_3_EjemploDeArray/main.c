#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejemplo de array\n");

    int numero;
    int vectorDeNumeros[10] = {7,-5,71,-6,-1,-4,-70,20,2,-1};
    int i;
    float promedioNumPositivos;
    int acumulador = 0;
    int contador = 0;
    int numMin;
    int numMax;
    int indiceMin;
    int indiceMax;
    int flagMin = 0;
    int flagMax = 0;
    //Inicializacion
/*  for(i = 0; i<10;i++)
    {
        vectorDeNumeros[i] = 0;
    }
*/


    // Carga secuencial
/*  for(i = 0; i<10;i++)
    {
        printf("\nIngrese numeros: ");
        scanf("%d",&vectorDeNumeros[i]);
    }
*/


    //Muestra todos los elementos
    for(i = 0; i<10;i++)
    {
        printf("\n%d",vectorDeNumeros[i]);
    }


    //Muestra los elementos negativos
    for(i = 0; i<10;i++)
    {
        if(vectorDeNumeros[i]<0)
        {
            printf("\n%d",vectorDeNumeros[i]);
        }

    }


    //Calcula promedio de numeros positivos
    for(i = 0; i<10;i++)
    {
        if(vectorDeNumeros[i]>0)
        {
            acumulador += vectorDeNumeros[i];
            contador++;
        }

    }

    promedioNumPositivos =(float)acumulador / contador;

    printf("\n\n%d \n\n %d", acumulador, contador);
    printf("\nEl promedio de numeros positivos es: %f", promedioNumPositivos);


    //Numero minimo y maximo y su posicion en el array
    for(i = 0; i<10;i++)
    {
        if(vectorDeNumeros[i] < numMin || flagMin == 0)
        {
            indiceMin = i;
            numMin = vectorDeNumeros[i];
            flagMin = 1;
        }
        if(vectorDeNumeros[i] > numMax || flagMax == 0)
        {
            indiceMax = i;
            numMax = vectorDeNumeros[i];
            flagMax = 1;
        }

    }
    printf("\nEl numero minimo es: %d\n\nY esta guardado en la posicion: %d", numMin, indiceMin);

    printf("\nEl numero maximo es: %d\n\nY esta guardado en la posicion: %d", numMax, indiceMax);


    return 0;
}
