#include <stdio.h>
/*Desarrolle un programa que procese las notas de un grupo de estudiantes de primer curso de la titulación
Ingeniería Informática en Sistemas de Información. El número de asignaturas impartidas en el primer curso será
fijado mediante una constante simbólica y se supone que todos los alumnos están matriculados de todas las
asignaturas. El número de alumnos de la promoción será introducido por el usuario; y una vez introducido aparecerá
un menú con todas las opciones disponibles*/

#define NASIG 3

void menu();
void datos(int nalums, int numasigs,float t[nalums][numasigs]);
void mediaAlumno(int numasigs,int nalums,float t[nalums][numasigs],int numAlum,float *notaMediaAlum);
void mediaAsignatura(int numasigs,int nalums,float t[nalums][numasigs],int numAsig,float *notaMediaAsig);
void rangoAsignatura(int nalums, int numasigs,float t[nalums][numasigs],int numAsig,int *iSuspensos,int *iAprobados,int *iNotables,int *iSobresalientes);
void matriculasyMenciones(int nalums, int numasigs,float t[nalums][numasigs],int *iMatriculas,int *iMenciones);

void main(){
    int nalums;
    int opcion;
    int numAlum;
    int numAsig;
    float notaMediaAlum,notaMediaAsig;
    int iSuspensos,iAprobados,iNotables,iSobresalientes,iMatriculas,iMenciones;

    printf("Introduzca el numero de alumnos de la promocion: ");
    scanf("%d", &nalums);
    float t[nalums][NASIG];

    do{
    menu();
    printf("Elegir opcion: ");
    scanf("%d",&opcion);
    while (opcion>5 || opcion<0){
        printf("\n\7Opcion incorrecta\n");
        printf("Elegir opcion: ");
        scanf("%d",&opcion);
    }

    switch(opcion){
        case 1:
            datos(nalums, NASIG, t);
            break;

        case 2:
            do{
                printf("\nIntroducir el numero del alumno: ");
                scanf("%d",&numAlum);
                if((numAlum<=0) || (numAlum>nalums)){
                    printf("\7El numero introducido es incorrecto.\nIntroduzca un numero valido.\n");
                }
            }while((numAlum<=0) || (numAlum>nalums));


            mediaAlumno(NASIG,nalums,t,numAlum,&notaMediaAlum);
            printf("\nLa media del alumno es %.2f\n",notaMediaAlum);
            break;

        case 3:
            do{
                printf("\nIntroducir el numero de la asignatura: ");
                scanf("%d",&numAsig);
                if((numAsig<=0) || (numAsig>NASIG)){
                    printf("\7El numero introducido es incorrecto.\nIntroduzca un numero valido.\n");
                }
            }while((numAsig<=0) || (numAsig>NASIG));

            mediaAsignatura(NASIG,nalums,t,numAsig,&notaMediaAsig);
            printf("\nLa media de la asignatura es %.2f\n",notaMediaAsig);
            break;

        case 4:

            do{
                printf("Introducir el numero de la asignatura: ");
                scanf("%d",&numAsig);
                if((numAsig<=0) || (numAsig>NASIG)){
                    printf("\7El numero introducido es incorrecto.\nIntroduzca un numero valido.\n");
                }
            }while((numAsig<=0) || (numAsig>NASIG));

            rangoAsignatura(nalums,NASIG,t,numAsig,&iSuspensos,&iAprobados,&iNotables,&iSobresalientes);
            printf("\nNumeros de suspensos totales: %d",iSuspensos);
            printf("\nNumeros de aprobados totales: %d",iAprobados);
            printf("\nNumeros de notables totales: %d",iNotables);
            printf("\nNumeros de sobresalientes totales: %d",iSobresalientes);
            break;

        case 5:
            matriculasyMenciones(nalums, NASIG,t,&iMatriculas,&iMenciones);
            printf("\nNumeros de matriculas: %d",iMatriculas);
            printf("\nNumeros de menciones: %d",iMenciones);
            break;
    }
    }while(opcion!=0);


}

void menu(){
    printf("\n***************************************************\n");
    printf("*                Menu Principal                   *");
    printf("\n***************************************************\n");
    printf("1. Insertar datos\n");
    printf("2. Mostrar media Alumno.\n");
    printf("3. Mostrar media asignatura.\n");
    printf("4. Calcula rangos de notas por asignatura.\n");
    printf("5. Calcula matriculas y menciones.\n");
    printf("0. Salir.\n");
}

void datos(int nalums, int numasigs,float t[nalums][numasigs]){
    int i=0;
    int j=0;

    printf("Introducir notas:\n");
    for(i=0;i<nalums;i++){
        printf("\nAlumno %d:",i+1);
        for(j=0;j<NASIG;j++){
            do{
                printf("\n- Asignatura %d: ",j+1);
                scanf("%f",&t[i][j]);

            }while(t[i][j]<0 || t[i][j]>10);
        }
    }
}

void mediaAlumno(int numasigs,int nalums,float t[nalums][numasigs],int numAlum,float *notaMediaAlum){
    int j=0;
    float sumaMedia=0.0;

    for(j=0;j<numasigs;j++){
        sumaMedia=sumaMedia+t[numAlum-1][j];
    }

    *notaMediaAlum=sumaMedia/numasigs;
}

void mediaAsignatura(int numasigs,int nalums,float t[nalums][numasigs],int numAsig,float *notaMediaAsig){
    int i=0;
    float sumaMedia=0.0;

    for(i=0;i<nalums;i++){
        sumaMedia=sumaMedia+t[i][numAsig-1];
    }

    *notaMediaAsig=sumaMedia/nalums;
}

void rangoAsignatura(int nalums, int numasigs,float t[nalums][numasigs],int numAsig,int *iSuspensos,int *iAprobados,int *iNotables,int *iSobresalientes){
    int i=0;
    int contSuspensos=0, contAprobados=0,contNotables=0,contSobresalientes=0;

    for(i=0;i<nalums;i++){
        if(t[i][numAsig-1]<5.0){
            contSuspensos++;
        }
        else if((t[i][numAsig-1]>=5.0) && (t[i][numAsig-1]<7.0)){
            contAprobados++;
        }
        else if((t[i][numAsig-1]>=7.0) && (t[i][numAsig-1]<9.0)){
            contNotables++;
        }
        else if((t[i][numAsig-1]>=9.0) && (t[i][numAsig-1]<=10.0)){
            contSobresalientes++;
        }
    }

    *iSuspensos=contSuspensos;
    *iAprobados=contAprobados;
    *iNotables=contNotables;
    *iSobresalientes=contSobresalientes;
}

void matriculasyMenciones(int nalums, int numasigs,float t[nalums][numasigs],int *iMatriculas,int *iMenciones){
    int i=0,j=0;
    int contMatriculas=0,contMenciones=0;

    for(i=0;i<nalums;i++){
        for(j=0;j<numasigs;j++){
            if (t[i][j]==10.0){
                contMatriculas++;
            }
            else if((t[i][j]>9.5)&&(t[i][j]<10.0)){
                contMenciones++;
            }
        }
    }
    *iMatriculas=contMatriculas;
    *iMenciones=contMenciones;
}

