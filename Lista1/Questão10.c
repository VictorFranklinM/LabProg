#include <stdio.h>
int main(){
    float cotação;
    float reais;
    printf("Quantos reais deseja converter em dólar? ");
    scanf("%f",&reais);
    printf("Qual a cotação? ");
    scanf("%f",&cotação);
    float dolar = reais/cotação;
    printf("R$%0.2f convertem em US$%0.2f\n",reais,dolar);
    return 0;
}
