#include <stdio.h>
/*Escriba un programa que lea el tiempo, en minutos, en que se produce el paso por meta de 5 ciclistas. Una vez
leídos los 5 números el programa deberá de imprimir por pantalla la lista de tiempos de los ciclistas con respecto al primero. Por
ejemplo, si los ciclistas entran por meta en los minutos 5, 6, 8, 11 y 15 el programa deberá imprimir la lista de diferencias de tiempos
siguiente: 0, 1, 3, 6, 10.*/
void main(){
    int min[5]={};/*para que no haya basura ={}*/
    int i;
    int dif;
    printf("Escriba el tiempo de cada ciclista:\n");
    for(i=0;i<5;i++){
        printf("ciclista n%d:",i+1);
        scanf("%d",&min[i]);
    }
    printf("-----------\n");
    printf("La diferencia con respecto al primero es:\n");
    for(i=0;i<5;i++){
        dif=min[i]-min[0];
        printf("ciclista n%d: %d\n",i+1,dif);


    }
}
