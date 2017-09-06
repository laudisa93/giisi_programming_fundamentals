#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void numVocDig(int nelems,char v[nelems],int *numVoc,int *numDig);

void main(){
    int nelems;
    char v[MAX];
    int i=0;
    int numVoc,numDig;

    printf("Introduzca el numero de elementos: ");
    scanf("%d",&nelems);
    fflush(stdin);

    printf("Introduzca los elementos: ");
    for(i=0;i<nelems;i++){
        printf("Elemento [%d]: ",i);
        scanf("%c",&v[i]);
        fflush(stdin);
    }

    numVocDig(nelems,v,&numVoc,&numDig);
    printf("\nVocales minusculas: %d", numVoc);
    printf("\nDigitos: %d", numDig);


}

void numVocDig(int nelems,char v[nelems],int *numVoc,int *numDig){
    int i=0;
    int contVoc=0,contDig=0;

    for(i=0;i<nelems;i++){
        if((v[i]=='a')||(v[i]=='e')||(v[i]=='i')||(v[i]=='o')||(v[i]=='u')){
            contVoc++;
        }
    }

    *numVoc=contVoc;

    for(i=0;i<nelems;i++){
        if((v[i]=='0')||(v[i]=='1')||(v[i]=='2')||(v[i]=='3')||(v[i]=='4')||(v[i]=='5')||(v[i]=='6')||(v[i]=='7')||(v[i]=='8')||(v[i]=='9')){
            contDig++;
        }
    }

    *numDig=contDig;
}
