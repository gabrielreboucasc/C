#include <stdio.h>

int main(){
    double A, B, C, pi = 3.14159;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("TRIANGULO: %0.3lf\n", (A*C)/2);
    printf("CIRCULO: %0.3lf\n", pi*C*C);
    printf("TRAPEZIO: %0.3lf\n", ((A + B)*C)/2);
    printf("QUADRADO: %0.3lf\n", B*B);
    printf("RETANGULO: %0.3lf\n", A*B);

    return 0;
}
