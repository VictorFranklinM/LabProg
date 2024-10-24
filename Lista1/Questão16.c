#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor;
    printf("Escreva um valor inteiro: ");
    scanf("%d",&valor);
    int módulo = abs(valor);
    printf("Módulo de %d = %d\n",valor,módulo);
    return 0;
}
