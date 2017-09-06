#include <stdio.h>
/*Escriba un programa que lea el sexo (carácter ‘M’ ó ‘H’) y un instante de tiempo expresado en horas
y minutos e imprima en la pantalla el mensaje de “Buenos días Señor”, “Buenos días Señora”, “Buenas
tardes Señor”, “Buenas tardes Señora”, “Buenas noches Señor” o “Buenas noches Señora” según
corresponda.*/
void main(){
    int hora,min;
    char s;
    printf("Introduzca M si es mujer y H si es hombre: ");
    scanf("%c",&s);
    printf("\nIntroduzca la hora: --:--");
   scanf("%d:%d",&hora,&min);

    if (s=='M'){
        if (hora>5 && hora<12){
            printf("Buenos dias Señora");
        } else if (hora>=12 && hora<20){
            printf("Buenos tardes Señora");
        } else if (hora>=20 && hora<24 || hora>=0){
            printf("Buenos noches Señora");
        }
    }

    if (s=='H'){
         if (hora>5 && hora<12){
            printf("Buenos dias Señor");
        } else if (hora>=12 && hora<20){
            printf("Buenos tardes Señor");
        } else if (hora>=20 && hora<24 || hora>=0){
            printf("Buenos noches Señor");
        }
    }
}
