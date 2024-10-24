#include <stdio.h>
int main(){
    float altura;
    float comprimento;
    float largura;
    printf("Escreva a altura da caixa: ");
    scanf("%f",&altura);
    printf("Escreva o comprimento da caixa: ");
    scanf("%f",&comprimento);
    printf("Escreva a largura da caixa: ");
    scanf("%f",&largura);
    float volume = altura*comprimento*largura;
    printf("Volume da caixa: %f\n",volume);
    return 0;
}
