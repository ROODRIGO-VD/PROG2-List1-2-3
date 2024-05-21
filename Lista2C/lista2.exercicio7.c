#include <stdio.h>
/*Escreva um programa que calcule o salário semanal de um trabalhador. As entradas
são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se
acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas
horas. Acima de 60h há um bônus de 100% para essas horas.*/

int main(){
    float hrs_trab, val_hr, salario;

    printf("Horas trabalhadas na semana: ");
    scanf("%f", &hrs_trab);

    printf("Valor hora: ");
    scanf("%f", &val_hr);

    if(hrs_trab <= 40){
        salario = hrs_trab * val_hr;
    }else if(hrs_trab <= 60){
        salario = 40 * val_hr + (hrs_trab - 40) * val_hr * 1.5;
    }else{
        salario = 40 * val_hr + 20 * val_hr * 1.5 + (hrs_trab - 60);
    }

    printf("O salário semanal do trabalhador é %.2f\n", salario);

}
