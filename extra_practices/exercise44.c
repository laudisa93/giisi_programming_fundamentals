/*Modifique el programa del EJ43 para que sólo permita un número máximo de intentos que vendrá definido por una
constante. Si el usuario agota todos los intentos el programa debe mostrar por pantalla “HA PERDIDO”.*/
#include <stdio.h>
#include <time.h>
#define MAXIMO 10
#define MaxInt 20
void main(){
    int numero,nUsuario,intentos=0;
    srand((unsigned)time( NULL ));
    numero = rand(MAXIMO);

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
    }while((intentos!=MaxInt) || (nUsuario!=numero));

    printf("El numero de intentos ha sido: %d",intentos);

    if(nUsuario!=numero){
        printf("\nHA PERDIDO");
    }
}
