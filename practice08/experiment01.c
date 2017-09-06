#include<stdio.h>
void main(void)
{
    int n;
    int *p;
    n=5;
    p=&n;
    printf("Contenido de la variable n: %d\n",n);
    printf("Direccion a la que apunta p: %p\n",&p);
    printf("Contenido de la memoria apuntada por p: %d\n",*p);
    *p= 10;
    printf("Contenido de la variable n: %d\n",n);
    printf("Contenido de la memoria apuntada por p: %d\n",*p);
}
