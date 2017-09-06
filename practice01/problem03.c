#include <stdio.h>
/*sistema de ecuaciones: ax+by=c, dx+ey=f; x=(ce-bf)/(ae-bd), y=(af-cd)/(ae-bd)*/
    void main(){
        int a,b,c,d,e,f,x,y;
        printf("Introduzca 3 valores:\n");
        scanf("%d%d%d", &a, &b, &c);
        printf("Introduzca 3 valores:\n");
        scanf("%d%d%d", &d,&e,&f);
        x=(c*e-b*f)/(a*e-b*d);
        y=(a*f-c*d)/(a*e-b*d);
        printf("El valor de X es : %d",x);
        printf("El valor de Y es : %d",y);

}
