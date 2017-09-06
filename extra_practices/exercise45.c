/*Modifique el programa del EJ44 para que una vez que el usuario haya terminado bien por adivinar el número bien
por llegar al número máximo de intentos se le permita al usuario comenzar de nuevo.*/
#include <stdio.h>
#include <time.h>
#define MAXIMO 10
#define MaxInt 20
void main(){
    int numero,nUsuario,intentos=0,opcion=0;
    srand((unsigned)time( NULL ));
    numero = rand(MAXIMO);
    do{
        do{
            printf("\nIntroduzca el numero que debe adivinar: ");
            scanf("%d",&nUsuario);
            if(nUsuario==numero){
                printf("Ha acertado el numero: %d\n", numero);
            }
            else if(nUsuario>numero){
                printf("El numero es menor que el introducido\n");
            }else if(nUsuario<numero){
                printf("El numero es mayor que el introducido\n");
            }
            intentos++;
        }while((intentos!=MaxInt)||(nUsuario!=numero));

        printf("El numero de intentos ha sido: %d",intentos);

        if(nUsuario!=numero){
            printf("\nHA PERDIDO");
        }
        printf("¿Quiere jugar de nuevo?");
        printf("1. SI\n 2. NO\n");
        scanf("%d",&opcion);

    }while(opcion!=2);

}
