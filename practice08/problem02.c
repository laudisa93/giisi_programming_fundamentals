#include <stdio.h>
#include <stdlib.h>
void mayorMenor(int a, int b, int *max, int *min);
int main()
{
    /*
    P2 (60 min).
    a) Implemente una funci�n que reciba dos argumentos decimales a y b distintos. Dicha funci�n deber� indicar cual de
    los dos argumentos es el mayor y cual de ellos es el menor. Para ello la funci�n recibir� por referencia otro par de argumentos
    llamados max y min. Al finalizar la ejecuci�n de la funci�n, max deber� contener el valor del m�ximo entre a y b, y min el valor del
    menor entre a y b.
    b) Cree un programa que demuestre el funcionamiento de la funci�n anterior.
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
