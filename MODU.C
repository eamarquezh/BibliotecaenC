// Nombre: 
#include <stdio.h>
int maximo(int [],int );
void main(){
int vectorA[100];
int i,ele;
clrscr();
ele=0;
printf("____________________________________________________\n");
printf("|paso 1:Escribre los valores para evaluar el maximo|\n");
printf("|paso 2:Escribe 0 para que envie el valor maximo   |\n");
printf("____________________________________________________\n");
    for(i=0; i<100; i++){  
        printf("Escribe el valor %d -->",i);
        scanf("%d",&vectorA[i]);
        if(vectorA[i]==0){break;}
        ele = ele + 1; 
    }
    printf("El valor maximo de la lista es: %d",maximo(vectorA,ele));
    getch();
}
int maximo(int lista[],int elementos){
    int i,max;
    max=0;
    for(i=0; i<elementos; i++){  
        if(lista[i]>max){
            max=lista[i];
        }
    }
    return max;
}