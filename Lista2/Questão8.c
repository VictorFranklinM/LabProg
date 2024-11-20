#include <stdio.h>
int main(){
    float produto;
    int parcelas;
    puts("Digite o valor do produto:");
    scanf("%f",&produto);
    parcelas=(int)produto/3;
    printf("O valor de R$%0.2f será dividido em:\n",produto);
    printf("Entrada de R$%0.2f\n",produto-((float)parcelas*2));
    printf("Duas parcelas de R$%d,00\n",parcelas);
    return 0;
}
