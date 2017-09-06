#include <stdio.h>
#include <stdlib.h>
int productoEscalar(int iElementos,int iVectorUno[],int iVectorDos[]);
void rellenarVector(int iElementos,int iVector[]);
int main()
{
    /*
    P4 (60 min).
    a) Escriba una función que devuelva el valor del producto escalar de dos tablas unidimensionales, de tamaño
    arbitrario, que se pasen como argumentos. Recuerde además pasar el tamaño de dichas tablas (con un parámetro basta ya que las
    dos tablas tendrán el mismo número de elementos). El producto escalar de dos tablas t1 y t2 es:
                                                    a1 * b1 + a2 * b2 + … + aN * bN
    donde ai es el elemento i-ésimo de la tabla t1 y bi es el elemento i-ésimo de la tabla t2.
    b) Escriba un programa que demuestre el funcionamiento de la anterior función.
    */
    int iElementos;
    printf("Introduce el numero de elementos: ");
    scanf("%d",&iElementos);
    int iVectorUno[iElementos],iVectorDos[iElementos];
    printf("vector 1:\n");
    rellenarVector(iElementos,iVectorUno);
    printf("vector 2:\n");
    rellenarVector(iElementos,iVectorDos);
    printf("El producto escalar es: %d",productoEscalar(iElementos,iVectorUno,iVectorDos));
}

int productoEscalar(int iElementos,int iVectorUno[],int iVectorDos[]){
    int iContador,iProducto=0;
    for(iContador=0;iContador<iElementos;iContador++){
        iProducto+=iVectorUno[iContador]*iVectorDos[iContador];
    }
    return iProducto;
}

void rellenarVector(int iElementos,int iVector[]){
    int iContador;
    for(iContador=0;iContador<iElementos;iContador++){
        printf("Escribe un numero:");
        scanf("%d",&iVector[iContador]);
    }
}
