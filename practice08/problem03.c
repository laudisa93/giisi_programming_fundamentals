#include <stdio.h>
#include <stdlib.h>
void mayorMenor(int a, int b, int *max, int *min,float *media);
int main()
{
    /*
    P3 (60 min). Modifique la funci�n del problema anterior para que adem�s se calcule la media de los dos n�meros a y b. Para ello la
    funci�n debe recibir un argumento m�s por referencia llamado media que almacenar� la media de ambos n�meros.
    */

    int a,b,max,min;
    float media;
    printf("Introduce un numero A: ");
    scanf("%d",&a);
    printf("Introduce un numero B: ");
    scanf("%d",&b);
    mayorMenor(a,b,&max,&min,&media);
    printf("El numero maximo es: %d\n",max);
    printf("El numero minimo es: %d\n",min);
    printf("La media es: %.2f",media);
}

void mayorMenor(int a, int b, int *max, int *min,float *media){
    if(a>b){
        *max=a;
        *min=b;
    }else{
        *max=b;
        *min=a;
    }
    *media=(a+0.00)/(b+0.00);
}
