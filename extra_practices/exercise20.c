#include <stdio.h>
/*Escriba un programa que pida cuatro n�meros enteros y averig�e si alguno de ellos es mayor que la
suma de los otros tres. En caso de que alguno de los n�meros cumpla esa condici�n, el programa
indicar� cu�l es ese n�mero y cu�l es la suma de los otros tres n�meros.*/
void main (){
    int a,b,c,d,suma=0;
    printf("Introduzca 4 numeros: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if (a>(b+c+d)){
        suma=b+c+d;
        printf("El numero %d es mayor que la suma de %d+%d+%d=%d",a,b,c,d,suma);
    }
    else if (b>(a+c+d)){
        suma=a+c+d;
        printf("El numero %d es mayor que la suma de %d+%d+%d=%d",b,a,c,d,suma);
    }
    else if (c>(a+b+d)){
        suma=a+b+d;
        printf("El numero %d es mayor que la suma de %d+%d+%d=%d",c,a,b,d,suma);
    }
    else if (d>(a+c+b)){
        suma=a+c+b;
        printf("El numero %d es mayor que la suma de %d+%d+%d=%d",d,a,c,b,suma);
    }
    else
        printf("No se ha encontrado la condicion");
}
