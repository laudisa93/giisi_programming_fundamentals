#include <stdio.h>
#include <stdlib.h>
void rellenarVector(int,int[],int*,int*);
int numeroImpar(int,int[]);

int main()
{
    /*
    EJ1 (60 min). Escriba una función que reciba un vector de enteros y devuelva el primer número impar que aparezca en el vector y
    la posición que ocupa. Escriba un programa principal que pruebe el funcionamiento de la función anterior.
    */
    int iElementos,iPosicion,iNumero;
    printf("Escribe el numero de elementos: ");
    scanf("%d",&iElementos);
    int iVector[iElementos];
    rellenarVector(iElementos,iVector,&iPosicion,&iNumero);
    printf ("El primer numero impar encontrado es %d en la posicion %d",iNumero,iPosicion);
}

void rellenarVector(int iElementos,int iVector[],int *iPosicion,int *iNumero){
    int iContador;
    for(iContador=0;iContador<iElementos;iContador++){
        printf("Escribe un numero: ");
        scanf("%d",&iVector[iContador]);
    }
    *iPosicion=numeroImpar(iElementos,iVector);
    *iNumero=iVector[numeroImpar(iElementos,iVector)];
}

int numeroImpar(int iElementos,int iVector[]){
    int iContador=0,iEncontrado=0;
    while(iContador<iElementos&&!iEncontrado){
        if(iVector[iContador]%2!=0){
            iEncontrado=1;
        }
        iContador++;
    }
    return iContador-1;
}
