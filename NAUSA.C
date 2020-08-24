#include <stdio.h>
#include <string.h>
void main(){
    char TI[10];
	int N;
	char TP[10];
	float PA;
	float CA;
	float TO;
	float TOT;
    clrscr();
    printf("¿Que hamburgues quiere? sencilla, doble o triple: \n");
    scanf("%s",&TI);
    printf("¿Cuantas Hamburguesas desea de tipo? %s \n", TI);
    scanf("%d",&N);
    if(strcmp(TI, "sencilla") == 0){
        PA =  (N * 20.00);
		CA = (PA * .05);
		TOT = PA + CA;
		TO = PA;
        printf("El total a pagar es: %f o con tarjeta seria: %f \n",TO,TOT);
		printf("¿Como va a pagar: tarjeta o efectivo? \n");
		scanf("%s",&TP);
        if(strcmp(TP, "tarjeta") == 0){
            printf("La cantidad a pagar es: %f \n",TOT);
        }else{
            printf("La cantidad a pagar es: %f \n",TO);
        }
    }
    if(strcmp(TI, "doble") == 0){
        PA =  (N * 25.00);
		CA = (PA * .05);
		TOT = PA + CA;
		TO = PA;
        printf("El total a pagar es: %f o con tarjeta seria: %f \n",TO,TOT);
		printf("¿Como va a pagar: tarjeta o efectivo? \n");
		scanf("%s",&TP);
        if(strcmp(TP, "tarjeta") == 0){
            printf("La cantidad a pagar es: %f \n",TOT);
        }else{
            printf("La cantidad a pagar es: %f \n",TO);
        }
    }
    if(strcmp(TI, "triple") == 0){
        PA =  (N * 28.00);
		CA = (PA * .05);
		TOT = PA + CA;
		TO = PA;
        printf("El total a pagar es: %f o con tarjeta seria: %f \n",TO,TOT);
		printf("¿Como va a pagar: tarjeta o efectivo? \n");
		scanf("%s",&TP);
        if(strcmp(TP, "tarjeta") == 0){
            printf("La cantidad a pagar es: %f \n",TOT);
        }else{
            printf("La cantidad a pagar es: %f \n",TO);
        }
    }
    printf("Gracias por comprar en EL NAUFRAGO SATISFECHO \n");
    getch();
}