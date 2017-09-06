#include <stdio.h>
/*Se dispone de 100 objetos ordenados por orden ascendente según el precio. Sabiendo que cada objeto vale 50 euros
más que el objeto anterior y que el primer objeto cuesta 5 euros, escriba un programa que muestre por pantalla el
precio de los 100 objetos.*/
void main(){
    int i=0;
    int objeto=5;
    printf("El objeto numero 1 vale %d €\n",objeto);
    for(i=1;i<100;i++){
        objeto+=50;
        printf("El objeto numero %d vale %d €\n",i+1,objeto);
    }


}
