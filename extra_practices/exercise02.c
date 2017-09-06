#include <stdio.h>
/*Escriba un programa que lea por teclado tres enteros que representen un instante de tiempo expresado
en horas, minutos y segundos e imprima en la pantalla su conversión a segundos según el formato del
siguiente ejemplo: 3 horas 23 minutos y 40 segundos equivalen a 12220 segundos*/
void main(){
    int h1,m1,s1,seg;
    printf("Escriba las horas, minutos y segundos:");
    scanf("%d%d%d",&h1,&m1,&s1);
    seg=(h1*3600)+(m1*60)+s1;
    printf("%d horas, %d minutos y %d segundos equivalen a %d segundos",h1,m1,s1,seg);

}
