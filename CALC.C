#include <stdio.h>
#include <conio.h>
void main(){
    float NA;
	float NB;
	float RES;
	int OPERACION;
    clrscr();
    printf("Indica el primer numero \n");
    scanf("%f",&NA);
    printf("Indica el segundo numero \n");
    scanf("%f",&NB);
    printf("¿Que operacion desea realizar con los numeros? \n");
    printf("1)Suma \n");
    printf("2)Resta \n");
    printf("3)Multiplicacion \n");
    printf("4)Division \n");
    scanf("%d",&OPERACION);
    switch (OPERACION){
    case 1:
        RES = NA + NB;
		printf("El resultado de la suma es: %f", RES);
        break;
    case 2:
        RES = NA - NB;
		printf("El resultado de la resta es: %f", RES);
        break;
    case 3:
        RES = NA * NB;
		printf("El resultado de la multiplicacion es: %f", RES);
        break;
    case 4:
        RES = NA / NB;
		printf("El resultado de la division es: %f", RES);
        break;
    default:
        printf("No se eligio ninguna operacion");
        break;
    }
    getch();
}