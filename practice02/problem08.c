#include <stdio.h>
/*Se quiere calcular la edad de un individuo, para ello se va a tener como entrada dos fechas en el
formato día (1 a 31), mes (1 a 12) y año (entero de cuatro dígitos), correspondientes a la fecha
de nacimiento y la fecha actual, respectivamente.Escribir un programa que calcule y visualice la edad
del individuo. Si es la fecha de un bebe (menos de un año de edad), la edad se debe dar en meses y
días; en caso contrario, la edad se calculará en años.*/
void main(){
    int dian,mesn,an,adia,ames,aa,edad,imes,idia;
    printf("Escriba la fecha de nacimiento:--/--/----\n");
    scanf("%d %d %d",&dian,&mesn,&an);
    printf("Escriba la fecha actual:--/--/----\n");
    scanf("%d %d %d",&adia,&ames,&aa);
    if (aa==an){
        imes=ames-mesn;
        idia=adia-dian;
        if (idia<0){
            idia=imes*31+idia;
            imes=idia/31;
            idia=idia-imes*31;
        }
        printf("La edad del individuo es %d meses y %d dias", imes,idia);
    }
    else{
        edad=aa-an;
        printf("La edad del individuo es %d años",edad);
    }
}
