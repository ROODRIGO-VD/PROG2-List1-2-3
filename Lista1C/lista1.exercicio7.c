/*Fa�a opera��es de arredondamento para cima e para baixo com n�meros float. Dica:
Pesquise o documento �Cart�o de Refer�ncia da Linguagem C� para encontrar quais
fun��es devem ser usadas no programa.*/

#include <stdio.h>
#include <math.h>

float arren_cima(float a){
    return ceil(a);
}
float arren_baixo(float a){
    return floor(a);
}

int main(){
    float num;
    printf("Digite um valor: ");
    scanf("%f", &num );
    printf("Arrendodamento para cima = %.2f\n Arredondamento para baixo = %.2f\n", arren_cima(num), arren_baixo(num));

    return 0;
}
