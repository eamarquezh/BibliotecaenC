	#include <stdio.h>
#include <conio.h>
void main(){
    float costodeproduccion;
	float preciodeventa;
	float materiaprima;
	float manodeobra;
	float gastosdefabricacion;
	int clave;
    clrscr();
    printf("Escribir clave del producto");
    scanf("%d",&clave);
    printf("Escribir el costo de la materia prima");
    scanf("%f",&materiaprima);
    if(clave == 1){
        manodeobra = materiaprima *.80;
		gastosdefabricacion = materiaprima *.28;
    }
    if(clave == 2){
        manodeobra = materiaprima *.85;
		gastosdefabricacion = materiaprima *.30;
    }
    if(clave == 3){
        manodeobra = materiaprima *.75;
        gastosdefabricacion = materiaprima *.35;
    }
    if(clave == 4){
        manodeobra = materiaprima *.75;
		gastosdefabricacion = materiaprima *.28;
    }
    if(clave == 5){
        manodeobra = materiaprima *.80;
		gastosdefabricacion = materiaprima *.30;
    }
    if(clave == 6){
        manodeobra = materiaprima *.85;
		gastosdefabricacion = materiaprima *.35;
    }
    if(clave < 1 || clave > 6 || materiaprima <= 0){
        printf("Clave de producto o costo de la materia prima no valido el resultado podria contener Errores");
    }

    costodeproduccion = materiaprima + manodeobra + gastosdefabricacion;
	preciodeventa = costodeproduccion + (costodeproduccion * .45);
    printf("El precio de venta es: %f ", preciodeventa);
    getch();
}