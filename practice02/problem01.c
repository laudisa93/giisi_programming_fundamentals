#include <stdio.h>
void main(){
/*Escriba un programa que pida al usuario un número y determine si este número es o no múltiplo
de 2, 3, 5, 7 y 10.*/
    int num;
    printf("Escriba un numero: \n");
    scanf("%d",&num);
    if (num%2==0){
        printf("El numero %d es multiplo de 2\n", num);
        }
        else {
            printf("El numero %d no es multiplo de 2\n", num);
        }
    if(num%3==0){
            printf("El numero %d es multiplo de 3\n", num);
        }
        else {
            printf("El numero %d no es multiplo de 3\n", num);
        }
    if (num%5==0){
            printf("El numero %d es multiplo de 5\n", num);
        }
        else {
            printf("El numero %d no es multiplo de 5\n", num);
        }
    if (num%7==0){
            printf("El numero %d es multiplo de 7\n", num);
        }
    else {
            printf("El numero %d no es multiplo de 7\n", num);
        }
    if (num%10==0){
            printf("El numero %d es multiplo de 10\n", num);
        }
        else {
            printf("El numero %d no es multiplo de 10\n", num);
        }
}
