#include <stdio.h>
#include <math.h>

int main(){
    int n, idade, mulher_ida = 0, homem_alt = 0;
    char sexo;
    double altura, tot_alt = 0.0, media_alt = 0.0, variancia = 0.0;

    printf("Numero de pessoas: ");
    scanf("%d", &n);

    double alturas[n];

    for(int i = 0; i < n; i++){
        printf("Idade da %d pessoa: ", i+1);
        scanf("%d", &idade);

        printf("Altura da %d pessoa : ", i+1);
        scanf("%lf", &altura);

        printf("Sexo da %d pessoa (M /  F): ", i+1);
        do {
            scanf(" %c", &sexo);
            if(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm'){
                printf("Entrada invalida. Digite apenas M ou F: ");
            }
        } while(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');

        tot_alt += altura;
        alturas[i] = altura;

        if(sexo == 'F'|| sexo == 'f'){
            if(idade >=20 && idade <= 35){
                mulher_ida++;
            }
        }else if(sexo == 'M'|| sexo == 'm'){
            if(altura > 1.80){
                homem_alt++;
            }
        }
    }

    media_alt = tot_alt / n;

    for(int i = 0; i < n; i++){
        variancia += pow(alturas[i] - media_alt, 2);
    }

    variancia /= n;

    printf("Numero de mulheres com idade entre 20 e 35 anos: %d\n", mulher_ida);
    printf("Numero de homens com altura maior que 1.80: %d\n", homem_alt);
    printf("Variancia da altura: %.2f", variancia);

    return 0;
}
