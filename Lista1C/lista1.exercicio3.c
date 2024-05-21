#include <stdio.h>

/*3. Fazer um programa que recebe um s�mbolo de opera��o do usu�rio (+, -, / ou *) e dois
n�meros reais. O programa deve retornar o resultado da opera��o recebida sobre estes
dois n�meros.*/

int main(){
    char op;
    printf("Selecione o operador (+, -, / ou *)\n");
    scanf("%c", &op);

    float num1, num2, resultado;
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch(op){
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, resultado);
            break;
        case '/':
            if(num2 != 0){
            resultado = num1 / num2;
            printf("%.2f / %.2f = %.2f", num1, num2, resultado);
            }
            else{
            printf("Divis�o por 0!\n");
            }
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f *%.2f = %.2f", num1, num2, resultado);
            break;
        default:
            printf("Operacao invalida!\n");
        }
    return 0;
}

