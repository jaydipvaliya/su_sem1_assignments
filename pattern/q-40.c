#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2*i) - 1; k++)
        {
            if (i == n)
            {
                printf("*");
            }
            else
            {
                if (k == 1 || k == (2*i)-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
            
            
        }
        printf("\n");
        
    }
    

    return 0;
}

