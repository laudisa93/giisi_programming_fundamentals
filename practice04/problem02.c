#include <stdio.h>
/*Escriba un programa que dado un array de enteros de tamaño fijo declarado con una constante simbólica, lea desde
teclado dicho array, elemento a elemento, y lo imprima por pantalla. Posteriormente, el programa debe calcular sobre el mismo
array, es decir, sin definir ningún array auxiliar el array inverso (invirtiendo el orden de los elementos del array), e igualmente
imprimirlo por pantalla.*/
# define TAM 5
void main(){
    int v[TAM];
    int i=0,j=0;

    //Pedir e imprimir el array
    printf("Introduzca los elementos del array:\n");
    for (i=0;i<TAM;i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",&v[i]);
    }
    printf("Array:\n");
    for(i=0;i<TAM;i++){
        printf("%2d ",v[i]);
    }printf("\n");

     int aux=0;
    //Invertir e imprimir el array
    for(i=0,j=TAM-1;i!=j;i++,j--){
        aux = v[i];
        v[i]=v[j];
        v[j]=aux;
    }

    printf("Array inverso:\n");
    for(j=0;j<TAM;j++){
        printf("%2d ",v[j]);
    }
}
