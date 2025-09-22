#include <stdio.h>

int main(){
    int a ,b,n;
    scanf("%d",&n);
    for (a=n; a>=1; a--){
        for (b=a; b>=1; b--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}