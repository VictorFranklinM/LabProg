#include <stdio.h>
int main(){
    float altura;
    char sexo;
    float peso;
    printf("Escreva a sua altura em metros: ");
    scanf("%f",&altura);
    printf("Escreva seu sexo: ");
    scanf(" %c",&sexo);
    switch (sexo)
    {
    case 'M':
        peso=72.7*altura-58;
        printf("Peso ideal: %0.1f\n",peso);
        break;
    case 'F':
        peso=62.1*altura-44.7;
        printf("Peso ideal: %0.1f\n",peso);
        break;
    default:
        printf("Sexo inválido\n");
        break;
    }
    return 0;
}
