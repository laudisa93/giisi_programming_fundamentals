#include <stdio.h>
/*Escriba un programa que simule el funcionamiento de una calculadora simple. Para ello leer� dos
enteros y un car�cter. Si el car�cter es un �+� se mostrara por pantalla la suma de ambos n�meros,
si es un ��� se mostrar� la diferencia, si es un �*� se mostrar� el producto, si es �/� se
calcular� el cociente y si es un �%� se mostrar� el resto de la divisi�n entera.*/
void main(){
    int num1, num2, resultado;
    char c;
    printf("Escriba un numero entero:\n");
    scanf("%d",&num1);
    printf("Escriba un caracter:\n");
    scanf("%s",&c);
    printf("Escriba un numero entero:\n");
    scanf("%d",&num2);
    switch (c){
        case '+':
            resultado=num1+num2;
            break;
        case '-':
            resultado=num1-num2;
            break;
        case '*':
            resultado=num1*num2;
            break;
        case '/':
            resultado=num1/num2;
            break;
        case '%':
            resultado=num1%num2;
            break;
        default:
            printf("El caracter seleccionado no es valido\n");
    }
    printf("El resultado de %d %c %d = %d", num1,c,num2,resultado);
}
