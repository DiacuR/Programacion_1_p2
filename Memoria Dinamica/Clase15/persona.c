#include <stdio.h>
#include <stdlib.h>
#include "persona.h"


ePersona* new_Persona()
{
    ePersona* puntero;

    puntero =(ePersona*)malloc(sizeof(ePersona));
    /*
    if(puntero != NULL)
    {
        puntero->legajo =1000;
        puntero->sexo = 'f';
        puntero->altura = 1.75;
    }
    */

    return puntero;
}


void mostrarPersona(ePersona* unaPersona)
{
    printf("%d----%c----%0.2f\n\n", unaPersona->legajo,
                                unaPersona->sexo,
                                unaPersona->altura);
}

void delete_persona(ePersona* unaPersona)
{
    free(unaPersona);
}


ePersona* new_Persona_Parametros(int legajo,char sexo,float altura)
{
    ePersona* p;

    p = new_Persona();

    if(p != NULL)
    {
        p->legajo = legajo;
        p->sexo = sexo;
        p->altura = altura;
    }

    return p;
}


void ePersona_SetLegajo(ePersona* unaPersona,int legajo)
{
    //No apuntar a null
    //regla de  validacion
    if(legajo>0)
    {
        unaPersona->legajo = legajo;
    }

}


int ePersona_GetLegajo(ePersona* unaPersona)
{
    return unaPersona->legajo;
}
