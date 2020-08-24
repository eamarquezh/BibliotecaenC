#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
    int a,b,n,x;
    float p,f,e;
    clrscr();
    printf("Ingrese el numero exponente:");
    scanf("%d",&x);
    n= 20;
	a= n;
	f= 1;
	e=1;
    while (n>0) {
        while (a>0) {
        f=f * a;
		a = a - 1;
        }
    p = pow(x,n);
    e = e + (p/f);
	n= n - 1;
	a= n;
	f=1;
    }
    printf("Mi resultado es: %f",e);
getch();
}