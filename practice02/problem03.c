#include <stdio.h>
/*Escriba un programa que pida al usuario una hora determinada, que denominaremos h1,
(pidiendo primero las horas expresadas en formado de 0 a 24 horas, y a continuación los minutos).
Posteriormente se pedirá al usuario otra hora h2. El programa deberá indicar si h1 es posterior
o anterior a h2. En el caso de ser posterior se mostrará por pantalla un mensaje y se indicará
cuantas horas y minutos han pasado, en caso de ser anterior se mostrará un mensaje similar y se
indicará las horas y minutos que faltan.*/
void main(){
    int h1,min1,h2,min2,h,m,x,min,h3,min3;
    printf("Introduzca una hora:\n");
    scanf("%d:%d", &h1,&min1);
    printf("\nIntroduzca otra hora:\n");
    scanf("%d:%d", &h2,&min2);
    if (h1>h2){//posterior
        printf("La hora %d:%d es posterior a las %d:%d\n", h1,min1,h2,min2);
        h=h1-h2;
        min=min1-min2;
        m=h*60;
        x=min+m;
        h3=x/60;
        min3=x-h3*60;
        printf("Han pasado %d horas y %d minutos",h3,min3);
    }
    else if (h1<h2){//anterior
        printf("La hora %d:%d es anterior a las %d:%d\n", h1,min1,h2,min2);
        h=h2-h1;
        min=min2-min1;
        m=h*60;
        x=min+m;
        h3=x/60;
        min3=x-h3*60;
        printf("Faltan %d horas y %d minutos",h3,min3);
    }
    else if (h1=h2){//misma hora
        if (min1>min2){
            printf("La hora %d:%d es posterior a las %d:%d\n", h1,min1,h2,min2);
            h3=h1-h2;
            min3=min1-min2;
            printf("Han pasado %d horas y %d minutos",h3,min3);
            }
        else if (min1<min2){
            printf("La hora %d:%d es anterior a las %d:%d\n", h1,min1,h2,min2);
            h3=h2-h1;
            min3=min2-min1;
            printf("Faltan %d horas y %d minutos",h3,min3);
            }
    }
    else if (h1==h2 && min1==min2){
        printf("Las horas introducidas son iguales\n");
    }
}
