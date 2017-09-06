#include<stdio.h>
    void main(void){
        int n;
        printf("Introduce un numero:\n");
        scanf("%d",&n);
        if(n<0){
            printf("%d el un número es negativo\n",n);
    }
        if(n%2==0){
            printf("%d es par",n);
        }
        else{
            printf("%d es impar",n);
        }
}
