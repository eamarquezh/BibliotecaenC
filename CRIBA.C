#include <stdio.h>
#include <conio.h>
void main(){
    int a,i,oc,x;
    int cont[200];
    clrscr();
    for(a=2; a<200; a++){
        cont[a]=a;   
    }
    printf("Te presento los numeros primos hasta el 200: \n");
    for(i=2; i<200; i++){  
        oc = i;
        while(oc<200){
            oc = oc + 1; 
            x = oc % i;
            if(x==0){
                cont[oc]=0;
            }
        }
        if(cont[i]>0){
            printf("%d ,",cont[i]);
        }
    }
    getch();
}