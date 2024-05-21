#include <stdio.h>

/*3. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
números reais. O programa deve retornar o resultado da operação recebida sobre estes
dois números.*/

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
            printf("Divisão por 0!\n");
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

