#include <stdio.h>

int main(){
    int a, b, c, d;

    float e, f, g, h;

    char v[10];

    int x;

    int *p = &a;

    *p++;
    printf("Apontando para o endere�o -> %d \n", *p);

    if(p == &b){
        printf("Ponteiro coincide com o endere�o de B");
    }else if( p == &c){
        printf("Ponteiro coincide com endere�o C");
    }else if(p == &d){
        printf("Ponteiro coincide endere�o de D");
    }else if( p == &e){
        printf("Ponteiro coincide com endere�o de E");
    }else if(p == &f){
        printf("Ponteiro coincide com endere�o de F");
    }else if( p == &g){
        printf("Ponteiro coincide com endere�o de G");
    }else if(p == &h){
        printf("Ponteiro coincide com endere�o de H");
    }else if( p == &v){
        printf("Ponteiro coincide com o endere�o de V");
    }else if(p == &x){
        printf("Ponteiro coincide com endere�o de X");
    }else{
        printf("Ponteiro nao coincide com nenhuma variavel.");
    }
}
