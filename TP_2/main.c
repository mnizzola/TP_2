#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <conio.h>
#define TAM 21

int main()
{


    int menos18 = 0;
    int entre19a35 = 0;
    int masde35 = 0;
    char nombre[50];
    char auxnombre[50];
    int edad;
    int estado;
    int dni;
    EPersona lista[TAM];
    char seguir='s';
    int opcion=0;
    int i,posicion,exito;

    while(seguir =='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
                case 1:
                posicion = obtenerEspacioLibre(lista);

                exito  = agregarPersona(lista,posicion);
                if (exito){

                printf("\n Agregado con exito \n");

                }

                break;
            case 2:
                printf("ingrese dni:");
                scanf("%d",&dni);
                exito = borrarPersona(lista,dni);

                if(exito){

                printf("se borro con exito la persona con el dni: %d",lista[posicion].dni);

                }

                break;

            case 3:

                 ordenarArrayPorNombre(lista);

                break;

            case 4:
                 graficoDeEdades(lista);

            printf("\n");
                break;
            case 5:
                seguir = 'n';
                break;
        }



        }

return 0;

}



