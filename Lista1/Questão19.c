#include <stdio.h>
int main(){
    int num;
    printf("Escreva um número inteiro: ");
    scanf("%d",&num);
    (num % 2 == 0) ? printf("O número %d é par.\n",num) : printf("O número %d é ímpar.\n",num);
    return 0;
}
