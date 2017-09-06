/*Analice el siguiente código y descubra cuál es su objetivo. Ejecute paso a paso el código para descubrir cuál es su
funcionamiento dependiendo del número introducido.*/
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
