#include <stdio.h>

void main(){
    int i;
    char word [6];
    i=4;
    printf("Escriba una palabra de 5 letras:\n");
    scanf("%s",&word);
    printf("************\n");
    while (i>0){
        printf("*          *\n");
            if (i==2){
                printf("*   %s  *\n", word);
            }
        i--;
    }
    printf("************\n");
}
