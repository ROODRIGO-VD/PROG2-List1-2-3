#include <stdio.h>
#include <math.h>
#define PI 3.14159265

/*Implemente a função calcula_circulo, que calcula a área e a circunferência de um círculo de raio
r. Essa função deve obedecer o protótipo:
void calc_circulo(float r, float * circunferencia, float * area);
Fórmulas:
A = π r
2 ; c = 2 π r ; π = 3.14159265
Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.*/

void calc_circulo(float r, float *circunferencia, float *area){
    *area = PI * pow(r,2);
    *circunferencia = 2*PI*r;
}

int main(){
    float r, circunferencia, area;

    printf("Raio: ");
    scanf("%f", &r);

    calc_circulo(r, &circunferencia, &area);

    printf("Area = %.2f\n", area);
    printf("Circunferencia = %.2f\n", circunferencia);

}
