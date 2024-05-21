#include <stdio.h>

unsigned int INVERTE(unsigned int num) {
    unsigned int inverso = 0;
    while (num != 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    return inverso;
}

int main() {
    unsigned int num;

    printf("Número: ");
    scanf("%u", &num);
    printf("O inverso de %u é %03u\n", num, INVERTE(num));
    return 0;
}
