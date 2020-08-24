#include <stdio.h>
#include <math.h>
int main(){
    float nr[8][5];
    float acol,total;
    int d,s,df,dc,rep,f,c,a;
    clrscr();
    printf("----------|Semana1|Semana2|Semana3|Semana4|\n");
    printf("___________________________________________\n");
    for(d=0; d<7; d++){
        switch (d){
        case 0:
            printf("Lunes-----|");
            break;
        case 1:
            printf("Martes----|");
            break;
        case 2:
            printf("Miercoles-|");
            break;
        case 3:
            printf("Jueves----|");
            break;
        case 4:
            printf("Viernes---|");
            break;
        case 5:
            printf("Sabado----|");
            break;
        case 6:
            printf("Domingo---|");
            break;
        default:
            printf("x");
            break;
        } 
            for(s=0; s<4; s++){  
                nr[d][s] = (1000 + rand()%(10000-1000))/10.00;
                printf(" %.2f|",nr[d][s]);
            }
        printf("\n");
    }
    printf("___________________________________________\n");
    df=6;
    dc=4;
    rep=d*f;
    f=0;
    c=0;
    acol=0;
    total=0;
    printf("Totales---|");
    while(c<dc){ 
        acol=acol + nr[f][c];
        total=total + nr[f][c];
        f=f+1;
        if(f==df+1){f=0;c=c+1;printf("%.2f|",acol);acol=0;}
    }
    printf("\nEl total general es: %.2f|",total);
    getch();
}