#include <stdio.h>
int main(){
    float hora_aula;
    int horas;
    float inss;
    printf("Qual o valor hora aula do professor? ");
    scanf("%f",&hora_aula);
    printf("Quantas horas o professor trabalhou no mês? ");
    scanf("%d",&horas);
    printf("Qual a porcentagem do INSS? ");
    scanf("%f",&inss);
    inss=1-(inss/100);
    float salario_bruto = hora_aula*(float)horas;
    float salario_liquido = salario_bruto*inss;
    printf("Salário bruto: R$%0.2f\n",salario_bruto);
    printf("Salário líquido: R$%0.2f\n",salario_liquido);
    return 0;
}
