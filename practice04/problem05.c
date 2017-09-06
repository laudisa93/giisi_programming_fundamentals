#include <stdio.h>
#include<stdlib.h>
/*Escriba un programa que inicialice un array bidimensional de caracteres, de tama�o fijado por constantes simb�licas,
con una serie aleatoria de caracteres (emplear para la generaci�n aleatoria de caracteres el c�digo adjunto). Una vez
relleno el array, se mostrar� en la pantalla y se permitir� al usuario pulsar un car�cter. Pulsado el car�cter se
sustituir�n por un asterisco los elementos del array que coincidan con dicho car�cter. El programa seguir�
repiti�ndose hasta que el usuario pulse la tecla Esc (cuyo c�digo ASCII es 27).
                            #include<stdlib.h>
                            ...
                            char letra;
                            srand((unsigned)time(NULL));
                            ...
                            letra = rand()%('z'-'a') + 'a';*/
#define TAM1 3
#define TAM2 2
void main(){
    char v[TAM1][TAM2];
    int i=0,j=0;
    char letra,caracter;
    srand((unsigned) time(NULL));

    for(i=0;i<TAM1;i++){
        for(j=0;j<TAM2;j++){
            letra = rand()%('z'-'a') + 'a';
            v[i][j]=letra;
        }
    }

    printf("Array:\n");
    for(i=0;i<TAM1;i++){
        for(j=0;j<TAM2;j++){
            printf("%c ",&v[i][j]);
        }
        printf("\n");
    }


    printf("\nIntroduzca un caracter: ");
    scanf("%s",&caracter);

    for(i=0;i<TAM1;i++){
        for(j=0;j<TAM2;j++){
            if(caracter==v[i][j]){
                v[i][j]='*';
            }
        }
    }

    do{
        printf("\nIntroduzca un caracter: ");
        caracter=getch();
        fflush(stdin);
        for(i=0;i<TAM1;i++){
            for(j=0;j<TAM2;j++){
                if(caracter==v[i][j]){
                    v[i][j]='*';
                }
            }
        }

        printf("\nArray:\n");
        for(i=0;i<TAM1;i++){
            for(j=0;j<TAM2;j++){
                printf("%c ",v[i][j]);
            }
            printf("\n");
        }
    }while(caracter!=27);
}

    /*printf("Array:\n");
    for(i=0;i<TAM1;i++){
        for(j=0;j<TAM2;j++){
            printf("%s",v[i][j]);
        }
    }
}*/
