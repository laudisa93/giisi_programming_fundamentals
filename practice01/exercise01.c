#include <stdio.h>
void main (void){
    int base, altura, area;
    printf ("\nCálculo del área de un rectángulo");
    printf ("\nPor favor, introduzca base y altura: ");
    /* Leer base y altura */
    scanf ("%d%d", &base, &altura);
    /* Calcular e imprimir área */
    area = base*altura;
    printf ("\n\nEl área del rectángulo es: %d\n", area);
}
