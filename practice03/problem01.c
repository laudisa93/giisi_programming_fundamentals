/*Escriba un programa que imprima las letras del alfabeto a excepci�n de las vocales. Para ello
aproveche que los caracteres pueden ser tratados como n�meros. Compile y ejecute el siguiente
c�digo para darse cuenta de lo que significa tratar un car�cter como un n�mero (se le pueden sumar
cantidades y se pueden comparar). Parta de dicho c�digo y modif�quelo para crear el programa que se
pide.*/
#include<stdio.h>
void main(){
    char c;
    for(c='a';c<='z';c++){
        if((c!='a') && (c!='e') && (c!='i') && (c!='o') && (c!='u')){
            printf("%c\n",c);
        }
    }
}
