#include <stdio.h>
/*Escriba un programa que lea el sexo (car�cter �M� � �H�) y un instante de tiempo expresado en horas
y minutos e imprima en la pantalla el mensaje de �Buenos d�as Se�or�, �Buenos d�as Se�ora�, �Buenas
tardes Se�or�, �Buenas tardes Se�ora�, �Buenas noches Se�or� o �Buenas noches Se�ora� seg�n
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
            printf("Buenos dias Se�ora");
        } else if (hora>=12 && hora<20){
            printf("Buenos tardes Se�ora");
        } else if (hora>=20 && hora<24 || hora>=0){
            printf("Buenos noches Se�ora");
        }
    }

    if (s=='H'){
         if (hora>5 && hora<12){
            printf("Buenos dias Se�or");
        } else if (hora>=12 && hora<20){
            printf("Buenos tardes Se�or");
        } else if (hora>=20 && hora<24 || hora>=0){
            printf("Buenos noches Se�or");
        }
    }
}
