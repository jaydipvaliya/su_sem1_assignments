#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        printf("\n");
        
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
    }
        
    return 0;
}