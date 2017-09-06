#include <stdio.h>
/*Escriba un programa que pida al usuario dos números. El programa determinará cual de ellos es el mayor y cual el
menor, mostrando por pantalla el resultado. Para ello cree un programa principal y dos funciones que acepten cada una dos
argumentos, devolviendo la primera el valor del mayor de los argumentos, y la segunda devolviendo el menor de los dos
argumentos.*/

int mayor (int,int);
int menor (int,int);

void main(){
    int x,y;
    int may,men;
    printf("Escriba un numero:");
    scanf("%d",&x);
    printf("Escriba un numero:");
    scanf("%d",&y);

    may=mayor(x,y);
    printf("El nuemro mayor es %d\n",may);
    men=menor(x,y);
    printf("El numero menor es %d",men);
}

int mayor(int x,int y){
    if (x>y){
        return x;
    }else{
        return y;
    }
}
int menor(int x,int y){
    if (x<y){
        return x;
    }else{
        return y;
    }
}
