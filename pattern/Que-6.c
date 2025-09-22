#include <stdio.h>

int main(){
    char a ,b;
    int n;
    scanf("%d",&n);
    for (a=65; a<='A'+n-1; a++){
        for (b=65; b<='A'+n-1; b++){
            printf(" %c",b);
        }
        printf(" \n");
    }
    return 0;
}