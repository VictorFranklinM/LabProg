#include <stdio.h>
int main(){
    int x;
    printf("Escreva um número\n");
    scanf("%d",&x);
    printf("Número: %d\n",x);
    printf("Número em hexadecimal: %0x\n",x);
    printf("Número octal: %o\n",x);
    return 0;
}
