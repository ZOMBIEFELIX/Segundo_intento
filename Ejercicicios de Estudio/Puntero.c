/*Martínez Barradas Félix Daniel
Punteros*/
#include<stdio.h>

int main(){
int a = 2;
int *apt = &a;
printf("Resultado: %i \n", *apt);

printf("Direccion del resultado: %p \n", apt);
return 0;
}
