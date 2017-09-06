#include <stdio.h>
/*Se dispone de n aviones y m aeropuertos donde n y m son números enteros positivos leídos por el teclado. Cada avión
sólo puede aterrizar en los aeropuertos cuyo número sea igual o múltiplo del número del avión. Escriba un programa
que muestre por pantalla los aeropuertos en los que puede aterrizar cada avión.*/
void main(){
    int n, m, i=0,j=0;
    printf("\nNumero de aviones: ");
    scanf("%d",&n);
    printf("\nNumero de aeropuertos: ");
    scanf("%d",&m);

    for(i=1;i<=m;i++){
        for(j=n;j>=1;j--){
            if(j%i==0){
                printf("El avion %d puede aterrizar en el aeropuerto %d\n",j,i);
            }
        }printf("\n");
    }

}

