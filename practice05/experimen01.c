/*Ejecute el siguiente código paso a paso y observe qué ocurre con el hilo de la ejecución cuando se invoca una función. Pruebe
las diferentes acciones que ofrece el depurador (Step over, Step into, Step out) cuando se realice una invocación a una función.*/
#include<stdio.h>
#include<math.h>

float cuadrado(float);
float negativo(float);
float raiz(float,float,float);
float resultado1(float,float,float);
float resultado2(float,float,float);
    void main(void){
        float a,b,c;
        float r1,r2;
        printf("Calculadora de soluciones para ecuaciones de segundo grado\n");
        printf("Parametro a:");
        scanf("%f",&a);
        printf("Parametro b:");
        scanf("%f",&b);
        printf("Parametro c:");
        scanf("%f",&c);
        r1 = resultado1(a,b,c);
        r2 = resultado2(a,b,c);
        printf("Las soluciones a la ecuacion son x=%f y x=%f",r1,r2);
    }

    float cuadrado(float n){
        return n*n;
    }

    float negativo(float n){
        return -1.0 * n;
    }

    float raiz(float a,float b,float c){
        float b2;
        b2 = cuadrado(b);
    return sqrt( b2 - 4.0 * a * c);
    }

    float resultado1(float a,float b,float c){
        float negb;
        float r;
        negb = negativo(b);
        r = raiz(a,b,c);
    return (negb + r) / (2.0 * a);
    }

    float resultado2(float a,float b,float c){
        float negb;
        float r;
        negb = negativo(b);
        r = raiz(a,b,c);
        return (negb - r) / (2.0 * a);
    }
