#include <stdio.h>

int main(){
    double M[12][12], soma;
    int n = 1, i, j;
    char X[2];
    scanf("%s", &X);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i = 1; i < 12; i++){
        for(j = 0; j < n; j++){
            soma += M[i][j];
        }
        n++;
    }
    if (X[0] == 'S')
        printf("%0.1lf\n", soma);
    else 
        printf("%0.1lf\n", soma/66.0);
}
