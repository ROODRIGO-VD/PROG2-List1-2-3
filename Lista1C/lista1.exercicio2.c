    #include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres numeros : ");
    scanf("%d %d %d", &a, &b, &c);

    // Encontrar o maior número
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Encontrar o menor número
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    // Encontrar valores pares e calcular a média
    int soma_pares = 0;
    int count_pares = 0;
    if (a % 2 == 0) {
        printf("%d par.\n", a);
        soma_pares += a;
        count_pares++;
    }
    if (b % 2 == 0) {
        printf("%d par.\n", b);
        soma_pares += b;
        count_pares++;
    }
    if (c % 2 == 0) {
        printf("%d par.\n", c);
        soma_pares += c;
        count_pares++;
    }

    // Calcular média
    float media = (float)soma_pares / count_pares;

    // Mostrar resultados
    printf("O maior numero é: %d\n", maior);
    printf("O menor numero é: %d\n", menor);
    printf("A media dos valores pares e: %.2f\n", media);

    return 0;
}
