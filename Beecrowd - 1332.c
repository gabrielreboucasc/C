#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char g[10];

    scanf("%d", &n);

    while (n--){
        scanf("%s", &g);

        if(strlen(g) == 5)
            printf("3\n");
        if((g[0] == 'o' && g[1] == 'n') || (g[0] == 'o' && g[2] == 'e') || (g[1] == 'n' && g[2] == 'e'))
            printf("1\n");
        if((g[0] == 't' && g[1] == 'w') || (g[0] == 't' && g[2] == 'o') || (g[1] == 'w' && g[2] == 'o'))
            printf("2\n");
    }
    
}
