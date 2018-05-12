#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);
/**
 * agrega una nueva persona
 * @param lista el array se pasa como parametro.
 * @param pocision libre en el array
 * @return 1 si funciono o si no
 */
int agregarPersona(EPersona lista[],int i);

/**
 * baja logicamente un registro
 * @param lista el array se pasa como parametro.
 * @param pocision a modificar en el array
 * @return 1 si funciono o si no
 */
int borrarPersona(EPersona lista[],int i);

/**
 * ordena el array por medio del metodo del burbujeo
 * @param lista el array se pasa como parametro.
 * @return void
 */
void ordenarArrayPorNombre(EPersona lista[]);

/**
 * grafica con barras laterales las proporciones acumuladas de las edades
 * @param lista el array se pasa como parametro.
 * @return void
 */
void graficoDeEdades(EPersona lista[]);

#endif // FUNCIONES_H_INCLUDED
