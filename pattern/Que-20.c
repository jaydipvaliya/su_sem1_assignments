#include <stdio.h>

int main(){
    int a ,b,n;
    char count='A';
    scanf("%d",&n);
    for (a=1; a<=n; a++){
        for (b=1; b<=a; b++){
            printf(" %c",count);
            count++;
        }
        printf(" \n");
    }
    return 0;
}