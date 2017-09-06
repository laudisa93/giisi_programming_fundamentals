#include <stdio.h>
/*Escriba un programa que lea desde teclado el día y mes de nacimiento e imprima en la pantalla el
 horóscopo correspondiente.*/
void main(){
    int d,m;
    printf("Introduzca el dia y el mes de nacimiento:\n");
    scanf("%d%d", &d,&m);
    if ((d>=21 && m==3)||(d<=20 && m==4)){
        printf("Su horoscopo es ARIES");
    }
    else if ((d>=21 && m==4)||(d<=21 && m==5)){
        printf("Su horoscopo es TAURO");
    }
    else if ((d>=22 && m==5)||(d<=21 && m==6)){
        printf("Su horoscopo es GEMINIS");
    }
    else if ((d>=21 && m==6)||(d<=23 && m==7)){
        printf("Su horoscopo es CANCER");
    }
    else if ((d>=24 && m==7)||(d<=23 && m==8)){
        printf("Su horoscopo es LEO");
    }
    else if ((d>=24 && m==8)||(d<=23 && m==9)){
        printf("Su horoscopo es VIRGO");
    }
    else if ((d>=24 && m==4)||(d<=23 && m==10)){
        printf("Su horoscopo es LIBRA");
    }
    else if ((d>=24 && m==10)||(d<=22 && m==11)){
        printf("Su horoscopo es ESCORPIO");
    }
    else if ((d>=23 && m==11)||(d<=21 && m==12)){
        printf("Su horoscopo es SAGITARIO");
    }
    else if ((d>=22 && m==12)||(d<=20 && m==1)){
        printf("Su horoscopo es CAPRICORNIO");
    }
    else if ((d>=21 && m==1)||(d<=19 && m==2)){
        printf("Su horoscopo es ACUARIO");
    }
    else if ((d>=20 && m==2)||(d<=20 && m==3)){
        printf("Su horoscopo es PISCIS");
    }
}
