#include <stdio.h>  
int main() {  
   char a;
   int n;  
   scanf("%d",&n);  
   for (a=65;a<='A'+n-1;a++){  
       printf(" %c",a);  
   }  
    return 0;  
}