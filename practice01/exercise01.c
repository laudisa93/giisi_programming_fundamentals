#include <stdio.h>
void main (void){
    int base, altura, area;
    printf ("\nC�lculo del �rea de un rect�ngulo");
    printf ("\nPor favor, introduzca base y altura: ");
    /* Leer base y altura */
    scanf ("%d%d", &base, &altura);
    /* Calcular e imprimir �rea */
    area = base*altura;
    printf ("\n\nEl �rea del rect�ngulo es: %d\n", area);
}
