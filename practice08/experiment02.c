#include<stdio.h>
void operacionMultiple(int,int,int*,int*,int*,int*);
void main(void)
{
    int a=10,b=5;
    int suma,resta,multi,divi;
    operacionMultiple(a,b,&suma,&resta,&multi,&divi);
    printf("Para los entereos a=%d y b=%d\n",a,b);
    printf("a+b=%d\n",suma);
    printf("a-b=%d\n",resta);
    printf("a*b=%d\n",multi);
    printf("a/b=%d\n",divi);
}
void operacionMultiple(int a,int b,int *suma,int *resta,int *multi,int *divi)
{
    *suma = a+b;
    *resta = a-b;
    *multi = a*b;
    *divi = a/b;
}
