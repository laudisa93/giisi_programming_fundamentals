#include <stdio.h>
/*Escriba el programa del ejercicio anterior sin tener en cuenta la posición de los números. Ejemplo: si la
combinación ganadora es 3 6 4 8 9 23 el boleto 8 6 23 5 9 1 tiene 4 aciertos.*/
void main(){
    int combGanadora[6], boleto[6],i=0,j=0,aciertos=0;

    printf("\nEscriba la combinacion ganadora:\n-------------------------\n");
    for(i=0;i<6;i++){
        printf("numero %d: ",i+1);
        scanf("%d",&combGanadora[i]);
    }

    printf("\nEscriba el boleto:\n-------------------------\n");
    for(j=0;j<6;j++){
        printf("numero %d: ",j+1);
        scanf("%d",&boleto[j]);
    }
    j=0;
    while(j<6){
        for(i=0;i<6;i++){
            if(combGanadora[i]==boleto[j]){
                aciertos++;
            }
        }
        j++;
    }
    printf("\nEl boleto tiene %d aciertos",aciertos);
}
