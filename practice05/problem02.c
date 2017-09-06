#include <stdio.h>
/*Escriba un programa que nos permita operar con tiempos expresados en horas, minutos y segundos. El programa
recibirá dos cantidades de tiempo expresadas en horas, minutos y segundos, y devolverá como salida la suma de dichas
cantidades expresada también en horas, minutos y segundos.
Pare ello el programa operará siempre con cantidades de tiempo expresadas en segundos, y por tanto dispondrá de al
menos las siguientes funciones:
• Una función que reciba tres argumentos (horas, minutos y segundos) y devuelva la cantidad de segundos
correspondiente.
• Una función que reciba una cantidad en segundos, y devuelva el valor entero de horas que representa.
• Una función que reciba una cantidad en segundos, y devuelva el valor entero de minutos que representa.
• Una función que reciba una cantidad en segundos e imprima por pantalla la cantidad de horas, minutos y segundos
que corresponde.*/

int segundos(int hora, int min, int seg);
int hora(int seg);
int minutos(int seg);
int HoraMinSeg(int seg);

void main(){
    int hora1,hora2,min1,min2,seg1,seg2;

    printf("Primera hora a introducir:\n------------------------\n\n");
    printf("Hora: ");
    scanf("%d",&hora1);
    printf("Minutos: ");
    scanf("%d",&min1);
    printf("Segundos: ");
    scanf("%d",&seg1);
    printf("\n\nSegunda hora a introducir:\n------------------------\n\n");
    printf("Hora: ");
    scanf("%d",&hora2);
    printf("Minutos: ");
    scanf("%d",&min2);
    printf("Segundos: ");
    scanf("%d",&seg2);

    printf("\nLa suma vale: ");
    HoraMinSeg(segundos(hora1,min1,seg1)+segundos(hora2,min2,seg2));


}

int segundos(int hora, int min, int seg){
    return (hora*3600)+(min*60)+seg;
}

int hora(int seg){
    return seg/3600;
}

int minutos(int seg){
    return seg/60;
}

int HoraMinSeg(int seg){
    int iHora,iMin,iSeg;
    iHora=hora(seg);
    iMin=minutos(seg-(iHora*3600));
    iSeg=seg-(iHora*3600)-(iMin*60);
    printf("%d horas %d minutos %d segundos",iHora,iMin,iSeg);
}
