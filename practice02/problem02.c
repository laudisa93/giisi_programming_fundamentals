#include <stdio.h>
/*Escriba un programa que pida al usuario que pulse una tecla numérica. En el caso de que el
usuario pulse correctamente se le mostrará la tecla pulsada. Si el usuario pulsa otra tecla
que no sea un número se le mostrará un mensaje de error. Para comprobar que una variable c
de tipo carácter es un número se deben cumplir las condiciones c>=’0’ y c<=’9’.*/
void main(){
    char num;
    printf("Pulse una tecla numerica:\n");
    scanf("%c", &num);
    if (num>='0' && num<='9'){
        printf("La tecla que ha pulsado es el numero %c", num);
    }
    else
        printf("La tecla que ha pulsado no es un numero");
}
