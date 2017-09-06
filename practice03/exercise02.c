#include <stdio.h>
/*Escriba un programa que pida al usuario números hasta que éste proporcione el número cero. Una vez
proporcionado dicho número el programa devolverá por pantalla la media de los números introducidos
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
