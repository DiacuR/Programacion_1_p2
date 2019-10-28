#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//https://mockaroo.com Genera elementos para Archvos



int main()
{
    FILE* pArchivo;
    char miNombre[50] = {"german"};

    ///Escrtibir
    /*pArchivo = fopen("miArchivo.txt","w");

    if(pArchivo != NULL)
    {
        fprintf(pArchivo,"Hola");//Muestra lo ingresado en el seg parametro en el archivo creado

        fclose(pArchivo);//SIempre se tiene que cerrar cuando estas seguro que se abrio
    }*/


    ///Leer
/*
    pArchivo = fopen("miArchivo.txt","r");

    if(pArchivo != NULL)
    {
    while(!feof(pArchivo))
    {
        fgets(miNombre,49,pArchivo);//Solo lee la primer linea a no ser de feof().
        printf("%s",miNombre);
    }

    fclose(pArchivo);

    }
*/

///Escribir binario
/*
    pArchivo = fopen("miArchivo.txt","wb");

    if(pArchivo != NULL)
    {
        fwrite(miNombre,sizeof(char),strlen(miNombre),pArchivo);//Se  pone donde esta guardado el  dato(&).


        fclose(pArchivo);
    }
*/


pArchivo = fopen("miArchivo.txt","rb");
int x;


    if(pArchivo != NULL)
    {
    while(!feof(pArchivo))
    {
        fread(&x,sizeof(int),1,pArchivo);
        printf("%d",x);
    }

    fclose(pArchivo);

    }
    return 0;
}
