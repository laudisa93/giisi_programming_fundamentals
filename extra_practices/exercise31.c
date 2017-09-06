#include <stdio.h>
void main(){
    int i, n, fact=1;
    printf("Escriba un numero entero:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("El factorial de %d es %d", n,fact);
}
