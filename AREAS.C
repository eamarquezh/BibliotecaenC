#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b;
	float areaCuadrado,areaTriangulo,areaRectangulo;
	clrscr();
	printf("Ingresa la base \n");
	scanf("%f",&b);
	printf("Ingresa la altura \n");
	scanf("%f",&a);
	areaCuadrado = a*b;
	areaTriangulo = (a*b)/2;
	areaRectangulo = a*b;
	printf("El area del cuadrado es %f \n" , areaCuadrado);
	printf("El area del triangulo es %f \n" , areaTriangulo);
	printf("El area del rectangulo es %f \n" , areaTriangulo);
	getch();
}