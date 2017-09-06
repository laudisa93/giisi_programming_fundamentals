#include <stdio.h>
/*Escriba un programa que imprima en la pantalla con el formato del ejemplo el salario semanal de
una persona cuyas horas extras y horas semanales trabajadas son leídas por el teclado. Considere
que en la empresa en la que trabaja dicha persona se paga a 10 euros la hora y que las horas extras
se pagan a 20 euros. 40 horas trabajadas y 15 horas extras corresponden a un salario semanal de 700
euros*/
void main(){
    int horas,hextras,salario;
    printf("Introduzca las horas semanales y las horas extras:");
    scanf("%d%d", &horas,&hextras);
    salario=(horas*10)+(hextras*20);
    printf("%d horas trabajadas y %d horas extras corresponden a un salario semanal de %d euros",horas,hextras,salario);
}
