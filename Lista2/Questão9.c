#include <stdio.h>
#define TERMO 20
int main(){
    int fib[TERMO];
    fib[0]=1,fib[1]=1;
    for(int i = 2;i!=TERMO;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i!=TERMO;i++){
        printf("[%d]",fib[i]);
    }
    printf("\n");
    return 0;
}
