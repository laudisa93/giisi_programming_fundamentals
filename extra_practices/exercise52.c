#include <stdio.h>
/*Escriba un programa que busque un entero leído por teclado en un array unidimensional de enteros cuyo tamaño y
elementos son leídos por teclado. El programa debe mostrar en la pantalla si dicho número se encuentra o no en el
vector y si procede la posición en la que se encuentra.*/

void main(){
    int nelems,i=0,x,encontrado=0;
    int v[100];
    printf("Introduzca el numero de elementos:");
    scanf("%d",&nelems);

    printf("\nIntroduzca los elementos:\n ");
    for(i=0;i<nelems;i++){
        printf("Elemento numero %d: ",i+1);
        scanf("%d",&v[i]);
    }

    printf("\nIntroduzca un numero: ");
    scanf("%d",&x);

    i=0;
    while(i<nelems && !encontrado){
        if(x==v[i]){
            printf("\nEl numero %d se encuentra en el vector en la posicion %d",x,i+1);
            encontrado=1;
        }
        i++;
    }
    if (encontrado==0){
            printf("\nEl numero %d no se encuentra en el vector",x);
        }
}
