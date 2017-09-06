#include <stdio.h>
/*Escriba un programa que funcione como una calculadora. El programa mostrará un menú en el que se nos permitirá
elegir la operación matemática deseada (suma, resta, multiplicación, división) o salir del programa. Una vez elegida
la opción el programa pedirá al usuario los dos valores, y devolverá el resultado de la operación, esperando la
pulsación de una tecla para volver a mostrar el menú inicial. El programa deberá estar modularizado de forma que
haya una función para cada una de las siguientes tareas:
• Salida del menú por pantalla y lectura de la opción elegida. La opción elegida se devolverá como valor de retorno.
• Petición de cada valor. La función tendrá un argumento que nos permita indicar si el valor es el primero o el
segundo, para mostrar el mensaje adecuado, y nos devolverá como valor de retorno el valor introducido por el usuario.
• Procesamiento de la opción elegida. La función aceptará tres argumentos (la opción elegida y los dos valores) y
devolverá como valor de retorno el resultado de la operación matemática elegida.
• Muestra por pantalla el resultado (el resultado será el argumento).
• La función principal, que organizará las llamadas al resto de funciones.*/

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
