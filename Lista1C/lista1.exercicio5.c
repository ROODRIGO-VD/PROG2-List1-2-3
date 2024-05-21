#include <stdio.h>

float quatro(){
    float a =  3;
    float b = a /2;
    return b + 3.1;
}
float quatro2(){
    int a = 3;
    int b = a/2;
    return b + 3.1;
}
int quatro3(){
    int a = 3;
    int b = a /3;
    return b + 3.1;
}

int main(){
    float a = quatro();
    float b = quatro2();
    int  c = quatro3();

    printf("%.1f\n", a);
    printf("%.1f\n",b);
    printf("%.1d\n", c);

    return 0;
}


