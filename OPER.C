#include <stdio.h>
#include <conio.h>
/*Libreria necesaria para operaciones matemáticasmáscomplejas*/
#include <math.h>
void main(){
    float potencia;
    float raizCuadrada;
    float absoluto;
    float seno;
    float coseno;
    float tangente;
    float log_n;
    float log_10;
    /*Para elevar una variable a una potencia, se debeutilizar la funcion:pow(variable,potencia);*/
    potencia = pow(3,2);
    printf("Elevando %d a la %d se obtiene: %f",3,2,potencia);
    /*Para calcular la raiz cuadrada de una variable, se utilizala funcion:sqrt(variable);*/
    raizCuadrada = sqrt(potencia);
    printf("\nLa raiz cuadrada de %d es %f",potencia,raizCuadrada);
    /*Para obtener el valor absoluto de una variable se utilizala funcion:fabs(variable);*/
    raizCuadrada = -1 * raizCuadrada;
    printf("\nLa raiz en negativo es:%f",(raizCuadrada));
    absoluto = fabs(raizCuadrada);
    printf("\nElvalor absoluto es: %f",absoluto);
    /*Funciones trigonométricas (radianes)*/
    seno = sin(45);
    coseno = cos(45);
    tangente = tan(45);
    printf("\n\nEl valor del seno es: %f\n",seno);
    printf("El valor del coseno es: %f\n",coseno);
    printf("El valor de la tangente es: %f\n",tangente);
    /*Funciones logarítmicas*/
    log_n = log(5);
    log_10 = log10(5);
    printf("\n\nEl valor del ln(5) es: %f\n",log_n);
    printf("El valor del log10(5) es: %f\n",log_10);
    /*Imprimiendo el valor de constantes*/
    printf("\nEl valor de Pi es: %f\n",M_PI );
    printf("\nEl valor de e es: %f\n",M_E );
    getch();
}