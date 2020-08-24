#include <stdio.h>
#include <conio.h>
void main(){
    int articulo,iteracion,vendidos;
    float cuenta,total,prod,pago;
    clrscr();
    cuenta = 0;
    iteracion= 0;
    printf("-----------------Lista de Articulos:--------\n");
	printf("1) Articulo 1.........................239.99\n");
	printf("2) Articulo 2.........................129.75\n");
	printf("3) Articulo 3..........................99.95\n");
	printf("4) Articulo 4.........................350.89\n");
	printf("Presiona otra tecla 0 para finalizar\n");
    printf("----------------------------------------------\n");
    do{
        printf("Ingresa Articulo vendido en la semana\n");
        scanf("%d",&articulo);
        if (articulo > 0 && articulo <= 4 )
        {
            printf("Ingresa cuantos vendio en la semana\n");
            scanf("%d",&vendidos);
        }
        switch (articulo){
        case 1:
            total = 239.99;
            prod = vendidos * total;
            printf("->%d Articulo 1 %f es: %f\n", vendidos,total,prod);
            break;
        case 2:
            total = 129.75;
            prod = vendidos * total;
            printf("->%d Articulo 2 %f es: %f\n", vendidos,total,prod);
            break;
        case 3:
            total = 99.95;
            prod = vendidos * total;
            printf("->%d Articulo 3 %f es: %f\n",vendidos,total,prod);
            break;
        case 4:
            total = 350.89;
            prod = vendidos * total;
            printf("->%d Articulo 4 %f es: %f\n", vendidos,total,prod);
            break;
        default:
            iteracion = 20;
            printf("No ha elegido el articulo\n");
            break;
        }
        cuenta = cuenta + prod;
        iteracion = iteracion+1;
        vendidos=0;
        total=0;
        prod=0;
        articulo=0;
    }while (iteracion<20);
    printf("Tu cuenta de venta es: %f \n",cuenta);
    pago= (cuenta * .09) + 200.00;
    printf("Tu pago corresponde a : %f \n",pago);
getch();
}