/*Considerando a exist�ncia de notas (c�dulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10,
R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e
determine o menor n�mero de notas para se obter o montante fornecido. A fun��o deve
ter o seguinte prot�tipo:
int total_de_notas(int valor);*/

int total_de_notas(int valor){
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int tot_notas = 0;

    for(int i = 0; i < 7; i++){

        tot_notas += valor / notas[i];
        valor %= notas[i];
    }
    return tot_notas;
}

int main(){
    int valor;

    printf("Valor em R$: ");
    scanf("%d", &valor);

    printf("Menor numero de notas = %d\n", total_de_notas(valor));
    return 0;


}

