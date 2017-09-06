#include <stdio.h>
/*Escriba un programa que calcule y muestre por pantalla la lista de los múltiplos de 5, entre 1 y
100, y la suma de dichos múltiplos.*/
void main(){
    int i,suma=0;
    for(i=1;i<=100;i++){
        if(i%5==0){
            printf("%d\n",i);
            suma=suma+i;
        }
    }
    printf("La suma es: %d",suma);

}
