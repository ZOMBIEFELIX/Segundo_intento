/*Martínez Barradas Félix Daniel*/
#include <stdio.h>
int cubo(int n);
//void cubo(int *n);
int main()
{
int num=5;
printf("Valor original %i\n", num);
//Llamada por valor
num=cubo(num);
printf("El nuevo Valor %i\n", num);
//Llamada por referencia
//cubo(&num);
//printf("El nuevo valor %i\n", num);
return 0;
}

int cubo(int n)
{
return n * n * n;
}

/*void cubo(int *n)
{
*n= *n * *n * *n;
}
*/



