#include <stdio.h>

#include <math.h>


int main(){
    int a = 0;
    printf("Valor A: ");
    scanf("%d", &a);

    int b = 0;
    printf("Valor B: ");
    scanf("%d", &b);

    int c = 0;
    printf("Valor C: ");
    scanf("%d", &c);

    int delta = pow(b, 2) - 4 * a * c;
    if (delta < 0){
        printf("Delta negativo, raiz complexo não compatível!");
    }
    else{
        double x1 = (- b + sqrt(delta)) / (2.0*a);
        double x2 =  (-b - sqrt(delta) )/ (2.0 * a);
        printf("Delta = %d\n", delta);
        printf("S = {%.2f, %.2f}\n",x1, x2);
    }
    return 0;
}
