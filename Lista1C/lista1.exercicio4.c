#include <stdio.h>
#include <stdlib.h>
/*Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um
professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os
resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma
função. Em um passo seguinte, realize os controles necessários para não receber notas
inválidas.*/

float media(float a, float b, float c){
    return (a+b+c)/3;
}

int valida(float nota){
    if(nota >= 0 && nota <= 10){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    float n1, n2, n3;

    //Primeira Nota
    printf("Digite a 1a nota do aluno:\n");
    scanf("%f", &n1);
    while(!valida(n1)){
        printf("Nota invalida!! Tente novamente: ");
        scanf("%f", &n1);
    }

    //Segunda Nota
    printf("Digite a 2a nota do aluno:\n");
    scanf("%f", &n2);
    while(!valida(n2)){
        printf("Nota invalida!! Tente novamente: ");
        scanf("%f", &n2);
    }

    //Terceira Nota
    printf("Digite a 3a nota do aluno:\n");
    scanf("%f", &n3);
    while(!valida(n3)){
        printf("Nota invalida!! Tente novamente: ");
        scanf("%f", &n3);
    }

    //Limpar tela
    system("cls || clear");

    //Resultados
    float resultado = media(n1,n2,n3);
    printf("RESULTADOS:\n");
    printf("Media = %.2f\n", resultado);
    if(resultado >=6){
      printf("APROVADO!\n");
    }
    else{
        printf("REPROVADO!\n");
    }

    //VS
    if(resultado >=4 && resultado < 6  ){
        printf("Pode fazer a VS.");
    }
    else{
        printf("Nao pode fazer a VS.");
    }

    return 0;
}



