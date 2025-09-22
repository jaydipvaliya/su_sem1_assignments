#include <stdio.h>

int main() {
    int i, j;
    int n ; 
    scanf("%d",&n);
    for (i = n; i >= 1; i--) {
        for (j = n - i; j >=1; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c",j+64);
        }
        printf("\n");
    }

    return 0;
}
