/*Escriba un programa que imprima las letras del alfabeto a excepción de las vocales. Para ello
aproveche que los caracteres pueden ser tratados como números. Compile y ejecute el siguiente
código para darse cuenta de lo que significa tratar un carácter como un número (se le pueden sumar
cantidades y se pueden comparar). Parta de dicho código y modifíquelo para crear el programa que se
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
