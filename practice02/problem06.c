#include <stdio.h>
/*Cuatro enteros entre O y 100 representan las puntuaciones de un estudiante de un curso de
informática. Escribir un programa para encontrar la media de estas puntuaciones y visualizar una
tabla de notas de acuerdo al siguiente cuadro: 90-100-A, 80-89-B,70-79-C,60-69-D,0-59-E */
void main(){
    float n1,n2,n3,n4,media;
    printf("Escriba la nota 1:\n");
    scanf("%fl",&n1);
    printf("Escriba la nota 2:\n");
    scanf("%fl",&n2);
    printf("Escriba la nota 3:\n");
    scanf("%fl",&n3);
    printf("Escriba la nota 4:\n");
    scanf("%fl",&n4);
    printf("  TABLA DE NOTAS\n  --------------\n");
    printf("Media   |   Puntuacion\n----------------------\n");
    printf("90-100  |       A\n80-89   |       B\n70-79   |       C\n60-69   |       D\n0-59    |       E\n\n");
    media=(n1+n2+n3+n4)/4;
    if (media<60)
        printf("La media de las notas es %.2f y la puntuacion es E",media);
    else if(media<70)
        printf("La media de las notas es %.2f y la puntuacion es D",media);
    else if (media<80)
        printf("La media de las notas es %.2f y la puntuacion es C",media);
    else if (media<90)
        printf("La media de las notas es %.2f y la puntuacion es B",media);
    else
        printf("La media de las notas es %.2f y la puntuacion es A",media);
}
