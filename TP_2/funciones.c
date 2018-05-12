#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265358979323846
#define TAM 21

void inicializar(void){

     EPersona lista[TAM];
     for(int i=0; i<TAM; i++)
     {
         strcpy(lista[i].nombre, 'aaaaaa');
         lista[i].dni = 1000*PI;
         lista[i].estado = 0;
         lista[i].edad = i*i;
     }
}
int obtenerEspacioLibre(EPersona lista[]){
    int tam,posicion;

    tam=sizeof lista;
    for(int i=0; i< tam ; i++){
        if(lista[i].estado == 0){
            posicion = i;
            return posicion;
        }
    }
    return 0;
}

int agregarPersona(EPersona lista[],int posicion){

    int contador=0;

    char auxnombre[50];
            fflush(stdin);
            printf("ingrese nombre:");
               gets(auxnombre);
            strcpy(lista[posicion].nombre, auxnombre);

            printf("ingrese edad:");
            scanf("%d",&lista[posicion].edad);

            printf("ingrese dni:");
            scanf("%d",&lista[posicion].dni);

            lista[posicion].estado = 1;



            for(int i = 0; i < TAM; i++){
             if(lista[i].estado == 1){
                contador++;
             }

            }
            if(contador > 0 ){

            return 1;
            }

    return 0;

}
int borrarPersona(EPersona lista[],int dni){


    for(int i=0; i < TAM; i++){

        if(lista[i].dni == dni){
            lista[i].estado = 0;
        }
        if(lista[i].estado == 0 && lista[i].dni == dni){
            return 1;
        }

    }
return 0;

}
int buscarPorDni(EPersona lista[], int dni){


    for(int i=0; i < TAM; i++){
        if(lista[i].dni == dni){
        return i;

        }
    }
return 0;
}
void ordenarArrayPorNombre(EPersona lista[]){



        for (int i = 0; i < TAM; i++)                     //Loop for ascending ordering
        {
            for (int j = 0; j < TAM; j++)                //Loop for comparing other values
            {
                if ( strcmp(lista[i].nombre,lista[j].nombre)< 0)                 //Comparing other array elements a[j] > a[i])
                {
                EPersona tmp = lista[i];         //Using temporary variable for storing last value
                lista[i] = lista[j];            //replacing value
                lista[j] = tmp;                //storing last value
                }
            }
        }

        for(int i = 0; i < TAM; i++){
            if(lista[i].estado == 1)
            {
                printf("\n nombre: %s\n",lista[i].nombre);
                printf("\n edad: %d\n",lista[i].edad);
                printf("\n dni: %d \n",lista[i].dni);
            }
        }
}

void graficoDeEdades(EPersona lista[]){

    int menos18 = 0;
    int entre19a35 = 0;
    int masde35 = 0;

                for(int i = 0; i < TAM; i++){

                        if(lista[i].edad<18){
                           menos18++;
                        }
                        if(lista[i].edad > 18 && lista[i].edad < 35){
                           entre19a35++;
                        }
                        if(lista[i].edad > 35){
                            masde35++;
                        }
                }
printf("\n menos de 18 son %d \n",menos18);
printf("\n entre 19 y 35 son %d \n",entre19a35);
printf("\n mas de 35  son %d \n",masde35);


printf("\n18<   |");
                for(int i = 0; i < TAM; i++){

                        if(lista[i].edad < 18){
                            //masde35++;
                            printf("#");
                        }
                }


printf("\n18<>35|");
                for(int i = 0; i < TAM; i++){

                        if(lista[i].edad > 18 && lista[i].edad < 35){
                            //entre19a35++;
                            printf("#");
                        }
                }
printf("\n35<   |");
                for(int i = 0; i < TAM; i++){

                        if(lista[i].edad > 35){
                            //masde35++;
                            printf("#");
                        }
                }


}
