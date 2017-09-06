#include <stdio.h>
/*Escriba un programa que ordene un vector de enteros de forma ascendente por el algoritmo de ordenación de la
burbuja. El algoritmo de la burbuja consiste en comparar pares de elementos adyacentes e intercambiarlos entre sí
hasta que estén todos ordenados.*/

void main(void){
    int i,a[10],n;
    int m,j,aux=0;
    printf("Cuantos Numeros vas a introducir:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("valor numero %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(j=0;j<n;j++)
    for(m=0;m<n-1;m++)
    if(a[m]>a[m+1]){
        aux=a[m];
        a[m]=a[m+1];
        a[m+1]=aux;
    }
    printf("\nLos datos ordenados en ascendente quedan:\n");
    for(i=0;i<n;i++)
      printf("%d\n",a[i]);


}
