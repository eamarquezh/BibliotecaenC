#include <stdio.h>
#include <conio.h>
void main()
{
	int x,Op;
	float acumulador,cantidad,cantdesc;
    clrscr();
    for( x=0; x<5 ; x++)
    {
        cantidad = 0;
		cantdesc = 0;
        printf("1._ Articulo A - $51 \n");
        printf("2._ Articulo B - $101 \n");
        printf("3._ Articulo C - $151 \n");
        printf("4._ Articulo D - $201 \n");
        printf("5._ Es todo \n");
        scanf("%d",&Op);
    
    switch (Op){
    case 1:
        cantidad = 51;
        break;
    case 2:
        cantidad = 101;
        break;
    case 3:
        cantidad = 151;
        break;
    case 4:
        cantidad = 201;
        break;
    case 5:
        cantidad = 0;
        break;
    default:
        printf("No ha elegido el articulo, Finalizara su compra \n");
        cantidad = 0;
        break;
    }
    if(cantidad >= 200){ cantdesc = cantidad -(cantidad * 0.15); }
    if(cantidad > 100 & cantidad < 200  ){ cantdesc = cantidad -(cantidad * 0.12); }
	if(cantidad > 0 & cantidad <= 100){ cantdesc = cantidad -(cantidad * 0.10); }
    if(cantidad == 0){ x=5;}
    acumulador = acumulador + cantdesc;
    clrscr();
    printf("Ultimo Articulo %d pagara %f de %f \n", Op, cantdesc, cantidad);
    }
    clrscr();
    printf("Usted pagara: %f \n", acumulador);
    getch();
}