#include <stdio.h>
/*Se dispone de n aviones y m aeropuertos donde n y m son n�meros enteros positivos le�dos por el teclado. Cada avi�n
s�lo puede aterrizar en los aeropuertos cuyo n�mero sea igual o m�ltiplo del n�mero del avi�n. Escriba un programa
que muestre por pantalla los aeropuertos en los que puede aterrizar cada avi�n.*/
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

