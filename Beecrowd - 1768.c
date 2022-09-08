#include <stdio.h>

int main (){
    int arvore;
    int i,j,g;
    while (scanf("%d", &arvore) != EOF){
        for (i = 0; i < arvore; i += 2){
            for (int j = 0; j < (arvore - i) / 2; j++)
                printf(" ");
            for (g = i; g >= 0; g--)
                printf("*");

            printf("\n");
        }
        for (i = 0; i < arvore/2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < arvore/2; i++)
            printf(" ");

        printf("***\n\n");
    }
}
