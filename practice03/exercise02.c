#include <stdio.h>
/*Escriba un programa que pida al usuario n�meros hasta que �ste proporcione el n�mero cero. Una vez
proporcionado dicho n�mero el programa devolver� por pantalla la media de los n�meros introducidos
anteriormente excluyendo al cero*/
void main(){
    int x,suma=0,media,i=0,encontrado=0;
    while(!encontrado){
        printf("Escriba un numero:\n");
        scanf("%d",&x);
        if (x==0){
            encontrado=1;
        }
        else{
            suma=suma+x;
            i++;
        }
    }
    if (i!=0 && encontrado==1){
        media=suma/(i);
        printf("La media es %d",media);
    }
}
