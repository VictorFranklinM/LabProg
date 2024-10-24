#include <stdio.h>
int main(){
    int x;
    printf("Escreva um número inteiro: ");
    scanf("%d",&x);
    printf("Triplo de %d: %d\n",x,x*3);
    printf("Quadrado de %d: %d\n",x,x*x);
    printf("Meio de %d: %0.1f\n",x,(float)x/2);
    return 0;
}
