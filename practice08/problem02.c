#include <stdio.h>
#include <stdlib.h>
void mayorMenor(int a, int b, int *max, int *min);
int main()
{
    /*
    P2 (60 min).
    a) Implemente una función que reciba dos argumentos decimales a y b distintos. Dicha función deberá indicar cual de
    los dos argumentos es el mayor y cual de ellos es el menor. Para ello la función recibirá por referencia otro par de argumentos
    llamados max y min. Al finalizar la ejecución de la función, max deberá contener el valor del máximo entre a y b, y min el valor del
    menor entre a y b.
    b) Cree un programa que demuestre el funcionamiento de la función anterior.
    */

    int a,b,max,min;
    printf("Introduce un numero A: ");
    scanf("%d",&a);
    printf("Introduce un numero B: ");
    scanf("%d",&b);
    mayorMenor(a,b,&max,&min);
    printf("El numero maximo es: %d\n",max);
    printf("El numero minimo es: %d",min);
}

void mayorMenor(int a, int b, int *max, int *min){
    if(a>b){
        *max=a;
        *min=b;
    }else{
        *max=b;
        *min=a;
    }
}
