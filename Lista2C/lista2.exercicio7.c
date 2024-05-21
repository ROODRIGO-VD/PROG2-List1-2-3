#include <stdio.h>
/*Escreva um programa que calcule o sal�rio semanal de um trabalhador. As entradas
s�o o n�mero de horas trabalhadas na semana e o valor da hora. At� 40 h/semana n�o se
acrescenta nenhum adicional. Acima de 40h e at� 60h h� um b�nus de 50% para essas
horas. Acima de 60h h� um b�nus de 100% para essas horas.*/

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

    printf("O sal�rio semanal do trabalhador � %.2f\n", salario);

}
