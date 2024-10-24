#include <stdio.h>
int main(){
    int x, n;
    printf("Escreva 2 números inteiros: ");
    scanf("%d%d",&x,&n);
    printf("Produto de %dx2^%d: %d\n",x,n,x*(2<<n-1));
    return 0;
}
