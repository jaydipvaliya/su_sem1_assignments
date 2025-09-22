#include <stdio.h>

int main(){
    int a ,b,n;
    int count=1;
    scanf("%d",&n); 
    for (a=1; a<=n; a++){
        for (b=1; b<=a; b++){
            printf(" %d",count);
            count++;
        }
        printf(" \n");
    }
    return 0;
}