#include <stdio.h>
#include <conio.h>
void main(){
    int p,n,c;
    float carrito,f,t,m;
    clrscr();
    carrito = 0;
    n= 0;
    printf("------------Lista de productos:--------\n");
	printf("1) Azucar.........................32.00\n");
	printf("2) Lecha condensada...............11:00\n");
	printf("3) Sopa............................5.00\n");
	printf("4) Atun...........................29.00\n");
	printf("5) Servilletas....................25.00\n");
	printf("6) Papel Higienico................70.00\n");
	printf("7) Suavizante.....................50.00\n");
	printf("8) Jabon..........................25.00\n");
	printf("9) pilas.........................125.00\n");
	printf("0) Para finalizar la captura\n");
    while (n<10) {
        printf("Ingresa producto\n");
        scanf("%d",&p);
        if (p>0 && p <=9 )
        {
            printf("Ingresa producto\n");
            scanf("%d",&c);
        }
        switch (p){
        case 1:
            t = 32.00;
            m= c * t;
            printf("................%d Azucar %f es: %f\n", c,t,m);
            break;
        case 2:
            t = 11.00;
            m= c * t;
            printf("................%d Lecha condensada %f es: %f\n", c,t,m);
            break;
        case 3:
            t = 5.00;
            m= c * t;
            printf("................%d Sopa %f es: %f\n", c,t,m);
            break;
        case 4:
            t = 29.00;
            m= c * t;
            printf("................%d Atun %f es: %f\n", c,t,m);
            break;
        case 5:
            t = 25.00;
            m= c * t;
            printf("................%d Servilletas %f es: %f\n", c,t,m);
            break;
        case 6:
            t = 70.00;
            m= c * t;
            printf("................%d Papel Higienico %f es: %f\n", c,t,m);
            break;
        case 7:
            t = 50.00;
            m= c * t;
            printf("................%d Suavizante %f es: %f\n", c,t,m);
            break;
        case 8:
            t = 25.00;
            m= c * t;
            printf("................%d Jabon %f es: %f\n", c,t,m);
            break;
        case 9:
            t = 125.00;
            m= c * t;
            printf("................%d pilas %f es: %f\n", c,t,m);
            break;
        case 0:
            n=10;
            break;
        default:
            printf("No ha elegido el articulo\n");
            break;
        }
        carrito = carrito + m;
        n = n+1;
        p=0;
        c=0;
        t=0;
        m=0;
    }
    printf("Mi resultado es: %f",carrito);
getch();
}