#include <stdio.h>
/*Analice y ejecute este código. Observe cómo se inicializan los elementos del array, y cómo se accede a los mismos usando
su índice.*/
void main(){
    int v[10];
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=5;
    v[4]=7;
    v[5]=11;
    v[6]=13;
    v[7]=17;
    int i;

    for(i=0;i<10;i++)
        printf("%d\n",v[i]);
}

/*b) Modifique el anterior código de tal forma que se indique un tamaño del array v menor que 8. No modifique el límite establecido
para la variable i en el bucle for. Ejecute de nuevo el código y observe que ocurre con los valores sobrantes en la inicialización
¿Qué se imprime por pantalla? ¿Por qué?
    ·La ultima posicion es basura (7) porque se declara un tamaño menor y no se ha cambiado i<8.
        void main(){
            int v[7] = {1,2,3,5,7,11,13,17};
            int i;

            for(i=0;i<8;i++)
                printf("%d\n",v[i]);*/

/*c) Modifique el código anterior de tal forma que se indique un tamaño del array v mayor que 8. Así mismo, modifique el límite para la
variable i en el bucle for para que coincida con el nuevo tamaño. Ejecute el código y observe qué ocurre con los elementos no
inicializados ¿Qué se imprime por pantalla? ¿Por qué?
    ·Las dos ultimas posiciones son 0 porque has declarado un tamaño de 10 y tienes solo 8 elementos, los demas son 0. Si no se declara
    el tamaño serian basura
        void main(){
            int v[10] = {1,2,3,5,7,11,13,17};
            int i;
            for(i=0;i<10;i++)
                printf("%d\n",v[i]);
        } */

/*d) Finalmente, dejando el tamaño del array a un valor superior a 8, modifique el programa anterior inicializando el array elemento a
elemento después de su declaración (v[0]=1; … ; v[7]=17;). ¿Qué se imprime por pantalla en esta ocasión? ¿Por qué?
    ·
        void main(){
            int v[10];
            v[0]=1;
            v[1]=2;
            v[2]=3;
            v[3]=5;
            v[4]=7;
            v[5]=11;
            v[6]=13;
            v[7]=17;
            int i;
              for(i=0;i<10;i++)
                printf("%d\n",v[i]);
            }*/
