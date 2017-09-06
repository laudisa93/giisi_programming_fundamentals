#include <stdio.h>
/*Escriba un programa que lea desde teclado elemento a elemento un vector
 de caracteres de tama�o fijado por una
constante simb�lica. Una vez le�do, el programa debe indicar si dicho vector
 forma un pal�ndromo. Un pal�ndromo es
una palabra, frase o n�mero que se lee igual de derecha a izquierda que de izquierda a derecha.
 Ejemplo: �reconocer�.*/
#define TAM 5
void main(){
    char v[TAM];
    int i=0,palindromo=1;
    printf("Introduzca los caracteres:\n");
    for(i=0;i<TAM;i++){
        printf("\nElemento %d: ",i+1);
        scanf("%c",&v[i]);
        fflush(stdin);
    }
    i=0;
    while(i<TAM/2 && palindromo){
        if(v[i]!=v[TAM-i-1]) palindromo=0;
        i++;
    }

    if(palindromo==1){
        printf("El vector es un palindromo");
    }else{
        printf("El vector no es un palindromo");
    }
}
