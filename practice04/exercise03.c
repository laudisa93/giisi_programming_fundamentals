#include <stdio.h>
/*Escriba un programa que lea desde teclado 6 números correspondientes a la combinación ganadora de la lotería
primitiva. A continuación, el programa leerá otros 6 números correspondientes a un boleto con el que se participa en
dicho sorteo. Finalizada la lectura, el programa deberá de indicar el número de aciertos del boleto cuyos números
hemos introducido. Ejemplo: si la combinación ganadora es 3 6 4 8 9 23 el boleto 8 6 23 5 9 1 tiene 2 aciertos.*/
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
    i=0;
    j=0;
    while((i<6)&&(j<6)){
        if(combGanadora[i]==boleto[j]){
            aciertos++;
        }
        i++;
        j++;
    }
    printf("\nEl boleto tiene %d aciertos",aciertos);
}
