#include <stdio.h>
/*El Ayuntamiento de un pueblo para evitar la contaminaci�n impone para el a�o 2011 que los coches con matricula par
s�lo podr�n circular los d�as pares y los coches con matricula impar s�lo podr�n circular los d�as impares. Sabiendo
que una persona que su coche tiene matricula par s�lo lo emplea los domingos, escriba un programa que muestre en la
pantalla cuantos domingos en el a�o podr� coger el coche y de qu� domingos se trata. Considere que el primer domingo
del a�o 2011 es el 2 de enero y que los meses impares tienen 31 d�as y los pares 30 d�as incluyendo el mes de febrero
como mes par.*/
void main(){
    int contadorDomingos=0,domingo;
    domingo=2;
    domingo=domingo+7;
        if(domingo%2==0){
            printf("%d/%d/2011",domingo,i);
            contadorDomingos++;
        }


    for(i=1;i<=12;i++){
        for(j=1;j>=31;j++){
            if((i==1)){
                domingo=2;
                domingo=domingo+7;

                if(domingo%2==0){
                    printf("%d/%d/2011",domingo,i);
                    contadorDomingos++;
                    if(domingo>=31){
                        domingo=domingo-31;
                    }
                }
            }
        }
        else if((i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i=12)){



        }
        else if((i==2)||(i==4)||(i==6)||(i==9)||(i==11)){

        }

    contadorDomingos++;
    }

    printf("Puede coger el coche %d domingos",contadorDomingos);
}
