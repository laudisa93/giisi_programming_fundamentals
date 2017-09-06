#include <stdio.h>
/*Escriba un programa que ordene un vector de enteros de forma ascendente por el algoritmo de ordenación de selección.
El algoritmo de selección es el siguiente:
1. Primero, busca el mínimo elemento del vector y lo intercambia con el primero. Esto hace que el primer elemento ya
esté en su sitio.
2. Luego, busca el mínimo en el resto del vector y lo intercambia con el segundo.
3. Este proceso se repite con el tercer elemento, el cuarto, etc., hasta que se recorre todo el vector.*/

void main(){
    int v[100],aux[100];
    int nelems;
    int i=0,j=0;
    int minElem;

    printf("Introduzca el numero de elementos del vector: ");
    scanf("%d",&nelems);

    printf("Introduzca los elementos del vector: \n");
    for(i=0;i<nelems;i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",&v[i]);
    }

    for(i=0;i<nelems;i++){
        minElem=v[i];
        for(j=0;j<nelems;j++){
            while(v[i]<minElem || i<nelems){
                minElem=v[i];
                i++;
            }
            aux[j]=minElem;
        }
    }

    printf("El vector es: ");
    for(j=0;j<nelems;j++){
        printf("%d ",aux[j]);
    }
}
