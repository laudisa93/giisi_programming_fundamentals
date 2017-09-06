#include <stdio.h>
/*Escriba un programa que lea dos instantes de tiempo expresados en horas, minutos y segundos e
indique que instante de tiempo es posterior.*/
void main(){
    int h1,min1,s1,h2,min2,s2;
    printf("Introduzca una hora: --:--:-- \n");
    scanf("%d:%d:%d",&h1,&min1,&s1);
    printf("Introduzca una hora: --:--:-- \n");
    scanf("%d:%d:%d",&h2,&min2,&s2);
    if (h1<h2){
        printf("La segunda hora es posterior a la primera");
    }
    else if (h1>h2){
        printf("La primera hora es posterior a la segunda");
    }
    else if (h1==h2){
        if(min1<min2){
            printf("La segunda hora es posterior a la primera");
        }
        else if (min1>min2){
            printf("La primera hora es posterior a la segunda");
        }
        else if (min1==min2){
            if (s1<s2){
                printf("La segunda hora es posterior a la primera");
            }
            else{
                printf("La primera hora es posterior a la segunda");
            }
        }
    }
}
