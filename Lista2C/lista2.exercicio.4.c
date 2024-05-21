#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char letra_rand() {
    srand(time(NULL));
    int random = rand() % 26;
    return 'a' + random;
}

int main() {
    char sorteio = letra_rand();
    char letra;

    printf("Adivinhe qual eh a letra sorteada (entre 'a' e 'z'): ");
    scanf(" %c", &letra);

    while (letra != sorteio) {
        if (letra < sorteio) {
            printf("Sua letra eh menor que a sorteada. Tente novamente: ");
        } else {
            printf("Sua letra eh maior que a sorteada. Tente novamente: ");
        }
        scanf(" %c", &letra);
    }

    printf("Parabéns! Você acertou a letra sorteada: %c\n", sorteio);

    return 0;
}
