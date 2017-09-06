#include <stdio.h>
/*Escriba una funci�n que reciba tres enteros indicando una fecha, de forma que el primero ser� el d�a, el segundo el
mes y el tercero el a�o, e imprima esta fecha con un determinado formato en la pantalla. Dicha funci�n recibir� dos
argumentos m�s, el primero indicar� el car�cter que se emplear� de separador entre cada cifra (p.ej. � / � � � - �).
El segundo ser� un n�mero entero que indicar� el orden en que se mostrar�n las tres partes de la fecha, de forma tal
que:
� 1: Indicar� formato espa�ol dd/mm/aaaa (por ejemplo: 24/5/2005).
� 2: Indicar� formato espa�ol abreviado dd/mm/aa (por ejemplo: 24/5/05).
� 3: Indicar� formato ingl�s mm/dd/aaaa (por ejemplo: 5/24/2005).
� 4: Indicar� formato ingl�s abreviado mm/dd/aa (por ejemplo: 5/24/05).
� 5: Indicar� formato japon�s aaaa/mm/dd (por ejemplo: 2005/5/24).
� 6: Indicar� formato japon�s abreviado aa/mm/dd (por ejemplo: 05/5/24).
Como ayuda cree una funci�n que reciba el valor de un a�o y devuelva su valor abreviado (por ejemplo: al recibir 2005
devolver� 05). Adem�s es recomendable que cree una serie de constantes simb�licas para representar m�s sencillamente
los distintos valores num�ricos empleados para indicar el formato de la fecha (por ejemplo: #define ESP 1).
Cree un programa principal que le pida al usuario el d�a, mes, a�o y car�cter separador y le muestre un men� que le
permite seleccionar el formato de fecha que desee. A continuaci�n se mostrar� por pantalla la fecha en el formato
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
