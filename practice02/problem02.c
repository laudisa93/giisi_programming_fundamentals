#include <stdio.h>
/*Escriba un programa que pida al usuario que pulse una tecla num�rica. En el caso de que el
usuario pulse correctamente se le mostrar� la tecla pulsada. Si el usuario pulsa otra tecla
que no sea un n�mero se le mostrar� un mensaje de error. Para comprobar que una variable c
de tipo car�cter es un n�mero se deben cumplir las condiciones c>=�0� y c<=�9�.*/
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
