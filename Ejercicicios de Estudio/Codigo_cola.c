/*Martinez Barradas Felix Daniel
Codigo de Lenguaje C que permite crear una cola e insertar,
quitar y borrar elementos de la cola (Manejo de una Cola)*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct nodo
{
    int elemento;
    struct nodo *siguiente;
} Nodo;

typedef struct cola
{
    Nodo *frente;
    Nodo *fin;
} Cola;

void crearCola(Cola *cola);
void insertar(Cola *cola, int elemento);
int quitar(Cola *cola);
void borrarCola(Cola *cola);
int frente(Cola *cola);
int colaVacia(Cola *cola);

int main()
{
    Cola cola;
    printf("Ingrese la opcion\n 1: Crear Cola\n 2: Insertar encola\n 3: Quitar de la cola\n 4: Borrar Cola\n 5: Frente de la cola\n 6: Cola vacia\n 7: Salir\n");
    int opcion,e;
    scanf("%d", &opcion);
    do
    {
        switch(opcion)
        {
        case 1:
            crearCola(&cola);
            printf("Cola creada\n");
            break;
        case 2:
            printf("Ingrese elemento nuevo de la cola\n");
            scanf("%d", &e);
            insertar(&cola,e);
            break;
        case 3:
            e=quitar(&cola);
            printf("El elemento %d fue quitado de la cola \n",e);
            break;
        case 4:
            borrarCola(&cola);
            printf("La cola ha sido borrada\n");
            break;
        case 5:
            e=frente(&cola);
            printf("El elemento al frente de la cola es %d\n",e);
            break;
        case 6:
            if(colaVacia(&cola))
                printf("cola Vacia\n");
            else
                printf("Cola no vacia\n");
            break;
        default:
            printf("Opcion incorrecta\n");
        }
        printf("Ingrese la opcion\n 1: Crear Cola\n 2: Insertar en cola\n 3: Quitar de la cola\n 4: Borrar cola\n 5: Frente de la cola\n 6: Cola vacia\n 7: Salir\n");
        scanf("%d",&opcion);
    }
    while(opcion !=7);
}

void crearCola(Cola *cola)
{
    cola -> frente = cola ->  fin = NULL;
}

void insertar(Cola *cola, int elemento)
{
    Nodo *a;
    a = (Nodo*)malloc(sizeof(Nodo));
    a->elemento=elemento;
    a->siguiente=NULL;
    if(cola->frente==NULL)
    {
        cola->frente=a;
    }
    else
    {
        cola->fin->siguiente=a;
    }
    cola->fin=a;
}

int quitar (Cola *cola)
{
    int e;
    Nodo *a;
    if(!colaVacia(cola))
    {
        e=cola->frente->elemento;
        a=cola->frente;
        cola->frente=cola->frente->siguiente;
        free(a);
        return e;
    }
}

void borrarCola(Cola *cola)
{
    printf("ELIMINANDO..\n");
    while(!colaVacia(cola))
    {
        printf("%d - ",quitar(cola));
    }
}

int frente(Cola *cola)
{
    if(!colaVacia(cola))
        return cola -> frente -> elemento;
}

int colaVacia(Cola *cola)
{
    if(cola -> frente == NULL)
        return 1;
    else
        return 0;
}
