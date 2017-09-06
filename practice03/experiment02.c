/*El siguiente programa calcula, para cada número desde 1 a 100 el múltiplo de 10 más cercano.
Analice y ejecute paso a paso el algoritmo para comprender su funcionamiento. Observe el uso que
se hace de estructuras de control anidadas para implementar correctamente el procedimiento del
algoritmo.*/
#include<stdio.h>
void main(void){
    int i,j;
    for(i=1;i<=100;i++){
        j = i;
            while(j%10!=0){
                if(j%10<5)
                    j--;
                else
                    j++;
            }
            printf("%d -> %d\n",i,j);
    }
}
