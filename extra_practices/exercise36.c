#include <stdio.h>
/*Escriba un programa que muestre en la pantalla todos los números menores que 50 y no divisibles por 3.*/
void main(){
    int i=1;
    for (i=1;i<=50;i++){
        if(i%3!=0){
        printf("%d\n",i);
        }
    }

}
