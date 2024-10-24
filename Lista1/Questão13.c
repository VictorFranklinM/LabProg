#include <stdio.h>
int main(){
    float celsius;
    printf("Escreva a temperatura em graus Celsius: ");
    scanf("%f",&celsius);
    float fahrenheit = (9*celsius + 160)/5;
    printf("Temperatura em Fahrenheit: %0.1f\n",fahrenheit);
    return 0;
}
