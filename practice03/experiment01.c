/*Analice el siguiente c�digo y descubra cu�l es su objetivo. Ejecute paso a paso el c�digo para descubrir cu�l es su
funcionamiento dependiendo del n�mero introducido.*/
#include<stdio.h>
void main(void){
    int n;
    int i;

    printf("Introduce un numero\n");
    scanf("%d",&n);

    i = 1;
    while(i<=n){
        printf("Numero %d\n",n-i+1);
        i++;
    }
}
