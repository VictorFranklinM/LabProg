#include <stdio.h>
int main(){
    int valor;
    int anterior;
    int sucessor;
    printf("Escreva um valor inteiro: ");
    scanf("%d",&valor);
    anterior = valor-1;
    sucessor = valor+1;
    printf("Valor anterior de %d: %d\n",valor,anterior);
    printf("Valor sucessor de %d: %d\n",valor,sucessor);
    return 0;
}
