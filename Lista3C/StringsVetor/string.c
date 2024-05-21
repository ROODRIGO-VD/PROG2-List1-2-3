#include <stdio.h>

int main(){

    char s[10];

    printf("Digite algo: (scanf convencional) ");
    gets(s);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
    puts("");


    printf("Digite algo: (scanf aprimorado)");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
}