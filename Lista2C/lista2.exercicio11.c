#include <stdio.h>
#include <math.h>
/*Fa�a um algoritmo para ler dois n�meros inteiros e calcular e mostrar o valor
resultante se elevarmos a base representada pelo primeiro � pot�ncia representada pelo
segundo. Dica: busque qual a fun��o que faz a potencia��o.*/
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
