#include <stdio.h>
/*Analice y ejecute este c�digo. Observe c�mo se inicializan los elementos del array, y c�mo se accede a los mismos usando
su �ndice.*/
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

/*b) Modifique el anterior c�digo de tal forma que se indique un tama�o del array v menor que 8. No modifique el l�mite establecido
para la variable i en el bucle for. Ejecute de nuevo el c�digo y observe que ocurre con los valores sobrantes en la inicializaci�n
�Qu� se imprime por pantalla? �Por qu�?
    �La ultima posicion es basura (7) porque se declara un tama�o menor y no se ha cambiado i<8.
        void main(){
            int v[7] = {1,2,3,5,7,11,13,17};
            int i;

            for(i=0;i<8;i++)
                printf("%d\n",v[i]);*/

/*c) Modifique el c�digo anterior de tal forma que se indique un tama�o del array v mayor que 8. As� mismo, modifique el l�mite para la
variable i en el bucle for para que coincida con el nuevo tama�o. Ejecute el c�digo y observe qu� ocurre con los elementos no
inicializados �Qu� se imprime por pantalla? �Por qu�?
    �Las dos ultimas posiciones son 0 porque has declarado un tama�o de 10 y tienes solo 8 elementos, los demas son 0. Si no se declara
    el tama�o serian basura
        void main(){
            int v[10] = {1,2,3,5,7,11,13,17};
            int i;
            for(i=0;i<10;i++)
                printf("%d\n",v[i]);
        } */

/*d) Finalmente, dejando el tama�o del array a un valor superior a 8, modifique el programa anterior inicializando el array elemento a
elemento despu�s de su declaraci�n (v[0]=1; � ; v[7]=17;). �Qu� se imprime por pantalla en esta ocasi�n? �Por qu�?
    �
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
