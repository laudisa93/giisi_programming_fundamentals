#include <stdio.h>
/*Al nacer un ni�o sus padres le abren una libreta de ahorros en la que ingresan todos los a�os 300 euros. A dicho
dinero el banco abona el d�a 31 de diciembre de cada a�o unos intereses del 5% de la cantidad disponible en la
libreta en dicho momento. Despu�s de 18 a�os, el ni�o retira el dinero para el pago de su matr�cula en el grado de
Ingenier�a Inform�tica en Sistemas de Informaci�n en la Universidad Pablo de Olavide, �De cu�nto dinero dispone?*/
void main(){
    float dinero=0.00;
    int i=0;
    for(i=1;i<=18;i++){
        dinero=300.00+(dinero*1.05);
    }
    printf("El dinero del que dispone es %.2f �",dinero);
}
