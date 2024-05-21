#include <stdio.h>
#include <math.h>
/*Faça um algoritmo para ler dois números inteiros e calcular e mostrar o valor
resultante se elevarmos a base representada pelo primeiro à potência representada pelo
segundo. Dica: busque qual a função que faz a potenciação.*/
int main(){

    int base, potencia;
    double resultado;

    printf("Base: ");
    scanf("%d", &base);

    printf("Potencia: ");
    scanf("%d", &potencia);

    resultado = pow(base, potencia);

    printf("%d elevado a %d = %.2f", base, potencia, resultado);

}
