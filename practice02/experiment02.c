#include<stdio.h>
    void main(void){
        char c;
        printf("Pulsa una tecla\n");
        scanf("%c",&c);
        switch(c){
            case '1':
                printf("Numero uno\n");
                break;
            case '2':
                printf("Numero dos\n");
                break;
            case 'b':
                printf("Letra b\n");
                break;
            case 'a': case'e': case 'i': case'o': case'u':
                printf("Vocal\n");
                break;
            default:
                printf("Has pulsado una tecla que no conozco\n");
                break;
        }
}
