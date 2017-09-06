#include <stdio.h>
/*Escriba un programa que funcione como una calculadora. El programa mostrar� un men� en el que se nos permitir�
elegir la operaci�n matem�tica deseada (suma, resta, multiplicaci�n, divisi�n) o salir del programa. Una vez elegida
la opci�n el programa pedir� al usuario los dos valores, y devolver� el resultado de la operaci�n, esperando la
pulsaci�n de una tecla para volver a mostrar el men� inicial. El programa deber� estar modularizado de forma que
haya una funci�n para cada una de las siguientes tareas:
� Salida del men� por pantalla y lectura de la opci�n elegida. La opci�n elegida se devolver� como valor de retorno.
� Petici�n de cada valor. La funci�n tendr� un argumento que nos permita indicar si el valor es el primero o el
segundo, para mostrar el mensaje adecuado, y nos devolver� como valor de retorno el valor introducido por el usuario.
� Procesamiento de la opci�n elegida. La funci�n aceptar� tres argumentos (la opci�n elegida y los dos valores) y
devolver� como valor de retorno el resultado de la operaci�n matem�tica elegida.
� Muestra por pantalla el resultado (el resultado ser� el argumento).
� La funci�n principal, que organizar� las llamadas al resto de funciones.*/

int lecturaOpcion();
int pedirDatos(int valor);
int procesamiento(int iOpcion, int valor1, int valor2);
void mostrarResultado(int resultado);
void funcionPrincipal();

void main(){
    funcionPrincipal();
}

int lecturaOpcion(){
    int iOpcion;
    printf("CALCULADORA:\n");
    printf("1. Suma.\n");
    printf("2. Resta.\n");
    printf("3. Multiplicacion.\n");
    printf("4. Division.\n");
    printf("0. Salir.\n");
    printf("Escoja un opcion: ");
    scanf("%d",&iOpcion);
    return iOpcion;

}

int pedirDatos(int valor){
    int num;
    printf("Introduzca el valor %d: ",valor);
    scanf("%d",&num);
    return num;
}

int procesamiento(int iOpcion, int valor1, int valor2){
    int resultado;
    switch(iOpcion){
        case 1:
            resultado=valor1+valor2;
            break;
        case 2:
            resultado=valor1-valor2;
            break;
        case 3:
            resultado=valor1*valor2;
            break;
        case 4:
            resultado=valor1/valor2;
            break;
        case 0:
            printf("Pulse cualquier tecla para volver al menu inicial");
            break;
    }
}

void mostrarResultado(int resultado){
    printf("El resultado de la operacion es %d",resultado);
}

void funcionPrincipal(){
    int iOpcion,valor1,valor2,resultado;

    iOpcion=lecturaOpcion();
    valor1=pedirDatos(1);
    valor2=pedirDatos(2);
    resultado=procesamiento(iOpcion,valor1,valor2);
    mostrarResultado(resultado);

}
