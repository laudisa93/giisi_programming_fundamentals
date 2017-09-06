#include <stdio.h>
/*Escriba una función que reciba tres enteros indicando una fecha, de forma que el primero será el día, el segundo el
mes y el tercero el año, e imprima esta fecha con un determinado formato en la pantalla. Dicha función recibirá dos
argumentos más, el primero indicará el carácter que se empleará de separador entre cada cifra (p.ej. ‘ / ’ ó ‘ - ‘).
El segundo será un número entero que indicará el orden en que se mostrarán las tres partes de la fecha, de forma tal
que:
• 1: Indicará formato español dd/mm/aaaa (por ejemplo: 24/5/2005).
• 2: Indicará formato español abreviado dd/mm/aa (por ejemplo: 24/5/05).
• 3: Indicará formato inglés mm/dd/aaaa (por ejemplo: 5/24/2005).
• 4: Indicará formato inglés abreviado mm/dd/aa (por ejemplo: 5/24/05).
• 5: Indicará formato japonés aaaa/mm/dd (por ejemplo: 2005/5/24).
• 6: Indicará formato japonés abreviado aa/mm/dd (por ejemplo: 05/5/24).
Como ayuda cree una función que reciba el valor de un año y devuelva su valor abreviado (por ejemplo: al recibir 2005
devolverá 05). Además es recomendable que cree una serie de constantes simbólicas para representar más sencillamente
los distintos valores numéricos empleados para indicar el formato de la fecha (por ejemplo: #define ESP 1).
Cree un programa principal que le pida al usuario el día, mes, año y carácter separador y le muestre un menú que le
permite seleccionar el formato de fecha que desee. A continuación se mostrará por pantalla la fecha en el formato
elegido.*/

int fecha(int iDia, int iMes, int iAnio,char caracter, int numFormato);
int anioAbreviado(int iAnio);

void main(){
    int iDia,iMes,iAnio;
    int numFormato;
    char caracter;
    printf("\nIntroduzca el dia: ");
    scanf("%d",&iDia);
    printf("\nIntroduzca el mes: ");
    scanf("%d",&iMes);
    printf("\nIntroduzca el anio: ");
    scanf("%d",&iAnio);
    printf("\nIntroduzca barra o guion:");
    scanf("%c",&caracter);

    printf("\nMENU\n--------\n");
    printf("1: Formato espanol dd/mm/aaa\n2: Formato espanol abreviado dd/mm/aa\n3: Formato ingles mm/dd/aaaa\n4: Formato ingles abreviado mm/dd/aa\n5: Formato japones aaaa/mm/dd\n6: Formato japones abreviado aa/mm/dd\n");
    scanf("%d",&numFormato);

    fecha(iDia,iMes,iAnio,caracter,numFormato);

}

int fecha(int iDia, int iMes, int iAnio,char caracter, int numFormato){
    int anAbreviado;
    switch(numFormato){
        case 1:
            printf("%d%c%d%c%d",iDia,caracter,iMes,caracter,iAnio);
            break;
        case 2:
            anAbreviado=anioAbreviado(iAnio);
            printf("%d%c%d%c%d",iDia,caracter,iMes,caracter,anAbreviado);
            break;
        case 3:
            printf("%d%c%d%c%d",iMes,caracter,iDia,caracter,iAnio);
            break;
         case 4:
            anAbreviado=anioAbreviado(iAnio);
            printf("%d%c%d%c%d",iMes,caracter,iDia,caracter,anAbreviado);
            break;
        case 5:
            printf("%d%c%d%c%d",iAnio,caracter,iMes,caracter,iDia);
            break;
        case 6:
            anAbreviado=anioAbreviado(iAnio);
            printf("%d%c%d%c%d",anAbreviado,caracter,iMes,caracter,iDia);
            break;
        }
}

int anioAbreviado(int iAnio){
    int anioAbreviado=0;
    anioAbreviado=iAnio-((iAnio/100)*100);
    return anioAbreviado;
}
