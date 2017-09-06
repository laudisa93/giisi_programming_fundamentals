#include <stdio.h>
/*Escriba un programa que lea un vector de enteros desde teclado y lo imprima en la pantalla. El número de elementos
del vector debe ser leído también desde teclado.*/

void main(){
    int nelems,i=0;
    int v[100];
    printf("Introduzca el numero de elementos:");
    scanf("%d",&nelems);

    printf("\nIntroduzca los elementos:\n ");
    for(i=0;i<nelems;i++){
        printf("Elemento numero %d: ",i+1);
        scanf("%d",&v[i]);
    }

    printf("El vector es: ");
    for(i=0;i<nelems;i++){
        printf("%d ",v[i]);
    }
}
