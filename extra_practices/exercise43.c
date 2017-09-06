#include <stdio.h>
#include <time.h>
/*Escriba un programa que genere un n�mero aleatorio entre 1 y la constante MAXIMO el cual debe adivinar el usuario.
Cuando el usuario no acierte el programa dar� como pista si el n�mero que se trata de adivinar es mayor o menor que
el introducido por el usuario. El programa deber� mostrar por pantalla cuantos intentos ha necesitado el usuario
para adivinar el n�mero. Para generar un n�mero aleatorio debe incluir la librer�a time.h y usar las siguientes
sentencias:
            srand((unsigned)time( NULL ));
            numero = rand();*/
#define MAXIMO 10
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
    }while(nUsuario!=numero);
    printf("El numero de intentos ha sido: %d",intentos);
}
