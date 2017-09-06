#include <stdio.h>
/*Extienda el programa del ejercicio anterior para que muestre también en la pantalla el mínimo de
la secuencia de números.*/
void main(){
    int x,suma=0,media,i=0,encontrado=0,minimo;
    while(!encontrado){
        printf("Escriba un numero:\n");
        scanf("%d",&x);
        if(i==0)
            minimo=x;
        if (x==0){
            encontrado=1;
        }
        else{
            suma=suma+x;
            i++;
        }
        if(x<minimo)
            minimo=x;
    }
    if (i!=0 && encontrado==1){
        media=suma/(i);
        printf("La media es %d",media);
    }
    printf("minimo=%d",minimo);
}
