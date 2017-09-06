#include <stdio.h>
/*Modifique el anterior programa para que ofrezca un menú que le de al usuario tres opciones:
1. Mostrar el triángulo original.
2. Mostrar el triángulo eliminando los números primos y sustituyendo éstos por asteriscos.
3. Mostrar el triángulo eliminando los números no primos y sustituyendo éstos por asteriscos.*/
    int esPrimo (int);
    void main (){
        int i=0,j=0,opcion;
        printf("MENU\n-----\nElija una opcion:\n1. Mostrar el triángulo original.\n2. Mostrar el triángulo eliminando los números primos y sustituyendo éstos por asteriscos.\n3. Mostrar el triángulo eliminando los números no primos y sustituyendo éstos por asteriscos\n");
        scanf("%d",&opcion);

        switch(opcion){
        case 1:
            for(j=0;j<5;j++){
                for(i=1;i<=9;i++){

                    if(j==0){
                        printf("%d",i);
                    }
                    else if(j==1 && i%2==0){
                        printf("%d",i);
                    }
                    else if(j==2 && i%3==0){
                        printf("%d",i);
                    }
                    else if(j==3 && i%4==0){
                        printf("%d",i);
                    }
                    else if(j==4 && i%5==0){
                        printf("%d",i);
                    }
                }printf("\n");
            }
               break;
        case 2:
            for(j=0;j<5;j++){
                for(i=1;i<=9;i++){
                    if(j==0){
                        if(esPrimo(i)==1){
                            printf("*");
                        }
                        else{
                            printf("%d",i);
                        }
                    }
                    else if(j==1 && i%2==0){
                        if(esPrimo(i)==1){
                            printf("*");
                        }
                        else{
                            printf("%d",i);
                        }
                    }
                    else if(j==2 && i%3==0){
                        if(esPrimo(i)==1){
                            printf("*");
                        }
                        else{
                            printf("%d",i);
                        }
                    }
                    else if(j==3 && i%4==0){
                        if(esPrimo(i)==1){
                            printf("*");
                        }
                        else{
                            printf("%d",i);
                        }
                    }
                    else if(j==4 && i%5==0){
                        if(esPrimo(i)==1){
                            printf("*");
                        }
                        else{
                            printf("%d",i);
                        }
                    }
                }printf("\n");
            }
               break;
        case 3:
        for(j=0;j<5;j++){
            for(i=1;i<=9;i++){

                if(j==0){
                    if(esPrimo(i)==1){
                        printf("%d",i);
                        }
                    else{
                        printf("*");
                    }
                }
                else if(j==1 && i%2==0){
                    if(esPrimo(i)==1){
                        printf("%d",i);
                        }
                    else{
                        printf("*");
                    }
                }
                else if(j==2 && i%3==0){
                    if(esPrimo(i)==1){
                        printf("%d",i);
                        }
                    else{
                        printf("*");
                    }
                }
                else if(j==3 && i%4==0){
                    if(esPrimo(i)==1){
                        printf("%d",i);
                        }
                    else{
                        printf("*");
                    }
                }
                else if(j==4 && i%5==0){
                    if(esPrimo(i)==1){
                        printf("%d",i);
                        }
                    else{
                        printf("*");
                    }
                }
            }printf("\n");
            }
               break;
        }
}

int esPrimo (int num){
    int primo=1;
    int i=2;
    while(i<num && primo){
        if (num%i==0)
        primo=0;
        else
        i++;
    }
    return primo;
}




