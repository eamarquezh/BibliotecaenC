#include <stdio.h>
int main(){
    int i;
    int n;
    int vectorA[99];
    int vectorB[99];
    int total;
    clrscr();
    printf("Escribe la dimension del arreglo no mayor a 99 \n");
    scanf("%d",&n);
    printf("---------Escribe los valores de A----------------- \n");
    for(i=0; i<n; i++){  
        printf("Escribe el valor del vector A dimension %d -->",i);
        scanf("%d",&vectorA[i]); 
    }
    printf("---------Ahora escribe los valores de B----------- \n");
    for(i=0; i<n; i++){  
        printf("Escribe el valor del vector B dimension %d -->",i);
        scanf("%d",&vectorB[i]); 
    }
    printf("--------Imprimiendo operaciones------------------ \n");
    for(i=0; i<n; i++){  
        total=vectorA[i]+vectorB[i];
        printf("La suma del valor A=%d y el B=%d es iguak a %d  \n",vectorA[i],vectorB[i],total);
        total=vectorA[i]-vectorB[i];
        printf("La resta del valor A=%d y el B=%d es iguak a %d  \n",vectorA[i],vectorB[i],total);
    }
    getch();
}