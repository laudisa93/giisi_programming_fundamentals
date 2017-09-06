#include <stdio.h>
/* Calcular la media de las notas introducidas por teclado con un diálogo interactivo semejante
al siguiente:
¿Cuantas notas? 20
Nota 1: 7.50
Nota 2: 6.40
Nota 3: 4.20
Nota 4: 8.50
...
Nota 20: 9.50
Media de estas 20: 7.475*/
void main(){
    int i=0,nelems=0;
    float media=0,nota=0;
    printf("¿Cuantas notas?: ");
    scanf("%d",&nelems);

    float v[nelems];
    for (i=0;i<nelems;i++){
        printf("\nNota %d: ",i+1);
        scanf("%f",&v[i]);
        nota=nota+v[i];
    }
    media=nota/i; //nelems no puede ser entero?
    printf("Media de estas %d notas: %.3f",nelems,media);
}
