// Nombre: 
#include <stdio.h>
#include <string.h>
int main(){
    char reporte[100];
    int pot,si,i,a;
    float acum;
    clrscr();
    printf("---------------Reporte---------------------------------\n");
    printf("--Escribe hasta 100 lineas o presiona x para terminar--\n");
    for(i=0; i<100; i++){
        printf("Ingresa la linea %d de reporte:  ",i);
	    gets(reporte);
        a = strlen(reporte);
        pot=1;
        if(reporte[0]=='x' && a== 1 ){break;}
        while(a>0){
            if(reporte[a]=='0'){ acum = acum + (0 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='1'){ acum = acum + (1 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='2'){ acum = acum + (2 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='3'){ acum = acum + (3 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='4'){ acum = acum + (4 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='5'){ acum = acum + (5 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='6'){ acum = acum + (6 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='7'){ acum = acum + (7 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='8'){ acum = acum + (8 * pot); pot=pot*10; si=1;}
            if(reporte[a]=='9'){ acum = acum + (9 * pot); pot=pot*10; si=1;}
            if(si==0){pot=1;}
            a=a-1;
            si=0;
        }
    }
	printf( "La suma del reporte es.............. %f \n",acum);
    getch();
}