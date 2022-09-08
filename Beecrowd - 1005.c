#include <stdio.h>

int main(){
    double nota1, nota2, resultado;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    resultado = (nota1*3.5) + (nota2*7.5);
    printf("MEDIA = %0.5lf", resultado/11);
    printf("\n");
    return 0;
}
