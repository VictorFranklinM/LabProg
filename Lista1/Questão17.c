#include <stdio.h>
int main(){
    float raio;
    float pi = 3.14159;
    printf("Qual o valor do raio? ");
    scanf("%f",&raio);
    printf("Diâmetro = %f\n",raio*2);
    printf("Circunferência = %f\n",2*(pi*raio));
    printf("Área = %f\n",pi*(raio*raio));
    return 0;
}
