#include <stdio.h>

void main(){
    int a, b, suma, resta, producto;
    float cociente;
    printf ("\nIntroduzca dos números a y b: ");
    scanf ("%d%d", &a, &b);
    printf ("\n a vale: %d y b vale: %d", a, b);
    suma= a+b;
    printf ("\nLa suma de a y b vale: %d\n", suma);
    resta= a-b;
    printf ("\nLa resta de a y b vale: %d\n", resta);
    producto= a*b;
    printf ("\nEl producto de a y b vale: %d\n", producto);
    cociente= a/b;
    printf ("\nEl cociente de a y b vale: %f\n", cociente);
}
