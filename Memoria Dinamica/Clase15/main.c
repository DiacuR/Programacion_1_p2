#include <stdio.h>
#include <stdlib.h>

#include "persona.h"

//getter lectura

//setter escritura


int main()
{
    ePersona persona;

    ePersona* puntero = new_Persona_Parametros(1000,'f',1.75);
    ePersona_SetLegajo(puntero,1001);
    if(puntero != NULL)
    {
        printf("La persona es: \n");

        if(ePersona_GetLegajo(puntero) > 1000)
        {
            mostrarPersona(puntero);

            printf("Libero los valores de el puntero 'puntero'.\n\n");
            delete_persona(puntero);

            mostrarPersona(puntero);
        }
    }

    return 0;
}


