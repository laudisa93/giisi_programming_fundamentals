#include <stdio.h>
/*Escriba un programa que lea un car�cter e imprima en la pantalla:
1. �De las primeras� si es �a�,�b�, o �c�.
2. �De las �ltimas� si es �x�, �y� o �z�.
3. �Del medio� si es un letra entre �d� y �w�.
4. �El car�cter no es una letra� en otro caso.*/
void main(){
    char letra;
    printf("Escriba un caracter: ");
    scanf("%c",&letra);
    if (letra=='a' || letra=='b' || letra=='c'){
        printf("De las primeras");
    }
    else if(letra=='x' || letra=='y' || letra=='z'){
        printf("De las �ltimas");
    }
    else if (letra>='d' && letra<='w'){
        printf("Del medio");
    }
    else
        printf("El car�cter no es una letra");
}
