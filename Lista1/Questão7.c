#include <stdio.h>
#include <math.h>
int main(){
    int valor;
    int resultado;
    printf("Escreva um valor inteiro: ");
    scanf("%d",&valor);
    resultado = pow(valor,2);
    printf("%d ao quadrado: %d\n",valor,resultado);
    return 0;
}
