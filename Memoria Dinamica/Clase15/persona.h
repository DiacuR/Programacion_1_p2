#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{
    int legajo;
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();   ///Constructor por defecto
ePersona* new_Persona_Parametros(int legajo,char sexo,float altura);

void ePersona_SetLegajo(ePersona* unaPersona,int legajo);
int ePersona_GetLegajo(ePersona* unaPersona);

void mostrarPersona(ePersona*);
void delete_persona(ePersona*);

#endif // PERSONA_H_INCLUDED
