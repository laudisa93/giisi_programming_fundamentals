#include <stdio.h>
/*Al nacer un niño sus padres le abren una libreta de ahorros en la que ingresan todos los años 300 euros. A dicho
dinero el banco abona el día 31 de diciembre de cada año unos intereses del 5% de la cantidad disponible en la
libreta en dicho momento. Después de 18 años, el niño retira el dinero para el pago de su matrícula en el grado de
Ingeniería Informática en Sistemas de Información en la Universidad Pablo de Olavide, ¿De cuánto dinero dispone?*/
void main(){
    float dinero=0.00;
    int i=0;
    for(i=1;i<=18;i++){
        dinero=300.00+(dinero*1.05);
    }
    printf("El dinero del que dispone es %.2f €",dinero);
}
