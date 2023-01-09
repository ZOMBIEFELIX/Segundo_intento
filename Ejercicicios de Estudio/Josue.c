/*Martínez Barradas Félix Daniel*/
#include <stdio.h>

#include <stdlib.h>



struct alumno

{

    char matricula[10];

    char nombre[20];

    char apellido[20];

    float promedio;

};



struct nodo

{

    struct alumno *datos;

    struct nodo *siguiente;

};



typedef struct alumno Estudiante;

typedef struct nodo Lista;



Estudiante *llenar_datos();



int es_vacio(Lista *inicio);

int insertar(Lista **inicio, Estudiante *x);




int main(int argc, char const *argv[])

{

    Estudiante *info = llenar_datos();

   

    printf("Nombre: %s \n", info->nombre);

   

    return 0;

}




Estudiante *llenar_datos()

{

    Estudiante *informacion = (Estudiante *) malloc(sizeof(Estudiante));

    if(informacion == NULL)

        return 0;

    printf("Ingresa la matricula: ");

    scanf("%s", informacion->matricula);

    printf("Ingresa tu nombre: ");

    scanf("%s", informacion->nombre);

    printf("Ingresa tu apellido: ");

    scanf("%s", informacion->apellido);

    printf("Ingresa tu promedio general: ");

    scanf("%f", &informacion->promedio);



    return informacion;

}
