#include <stdio.h>

float max_vet(int n, float *vet){
     float max = vet[0];

     for(int i=1;i < n; i++){
        if(vet[i] > max){
            max = vet[i];
        }

     }
    return max;
}

int main(){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];
    printf("Elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%f", &vet[i]);
    }

    float max = max_vet(n, vet);

    printf("O maior numero no vetor: %.2f\n", max);



}

