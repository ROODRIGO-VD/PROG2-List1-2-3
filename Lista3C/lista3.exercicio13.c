#include <stdio.h>

int main(){
    int a, b, c, d;

    float e, f, g, h;

    char v[10];

    int x;

    int *p = &a;

    *p++;
    printf("Apontando para o endereço -> %d \n", *p);

    if(p == &b){
        printf("Ponteiro coincide com o endereço de B");
    }else if( p == &c){
        printf("Ponteiro coincide com endereço C");
    }else if(p == &d){
        printf("Ponteiro coincide endereço de D");
    }else if( p == &e){
        printf("Ponteiro coincide com endereço de E");
    }else if(p == &f){
        printf("Ponteiro coincide com endereço de F");
    }else if( p == &g){
        printf("Ponteiro coincide com endereço de G");
    }else if(p == &h){
        printf("Ponteiro coincide com endereço de H");
    }else if( p == &v){
        printf("Ponteiro coincide com o endereço de V");
    }else if(p == &x){
        printf("Ponteiro coincide com endereço de X");
    }else{
        printf("Ponteiro nao coincide com nenhuma variavel.");
    }
}
