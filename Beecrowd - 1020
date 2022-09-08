#include <stdio.h>

int main(){
    int idade, dias, meses, anos;
    scanf("%d", &idade);

    if(idade < 365)
        anos = 0;
    else
        anos = idade/365;
    
    if((idade - anos*365) == 0)
        meses = 0;
    else
        meses = (idade - anos*365)/30;

    dias = (idade - anos*365) - 30*meses;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
