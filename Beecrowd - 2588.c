#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    int g[150];
    int i;
    int aux;
    char palavra[1020];
    while (scanf("%s", palavra) != EOF){
        i = 0;
        memset(g, 0, sizeof(g));
        while (palavra[i])
            g[palavra[i++]]++;
        for (i = 0, aux = 0; i < 150; ++i)
            if (g[i] & 1)
                ++aux;
        printf("%d\n", aux <= 1 ? 0 : aux - 1);
    }
    return 0;
}
