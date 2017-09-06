#include <stdio.h>
/*Escriba un programa que lea una fecha e imprima en la pantalla la fecha correspondiente al
día siguiente*/
void main(){
    int dia, mes, anyo, idia, imes, ianyo;
    printf("Escriba una fecha:\n");
    scanf("%d/%d/%d",&dia,&mes,&anyo);
    if((dia==30)&&((mes==4)||(mes==6)||(mes==9)||(mes==11))){
        idia=1;
        imes=mes+1;
        ianyo=anyo;
    }
    else if((dia==31)&&((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10))){
        idia=1;
        imes=mes+1;
        ianyo=anyo;
    }
    else if ((dia==28) && (mes==2)){
        idia=1;
        imes=mes+1;
        ianyo=anyo;
    }
    else if (dia==31 && mes==12) {
        idia=1;
        imes=1;
        ianyo=anyo+1;
    }
    else{
        idia=dia+1;
        imes=mes;
        ianyo=anyo;
    }
    printf("El dia siguiente es: %d/%d/%d", idia,imes,ianyo);
}
