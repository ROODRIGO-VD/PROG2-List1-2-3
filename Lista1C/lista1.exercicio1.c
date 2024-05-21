#include <stdio.h>

int main(){
    int tSegundo, hora, minuto, segundo;

    printf("Digite o total de segundos: ");
    scanf("%d", &tSegundo);

    hora = tSegundo / 3600;
    minuto = tSegundo / 60;
    segundo = tSegundo;

    printf("Horas: %d\nMinutos: %d\nSegundos: %d", hora, minuto, segundo);

    return 0;
}


