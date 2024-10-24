#include <stdio.h>
#include <math.h>
int main(){
    float num1,num2,num3,media_aritmetica,media_geometrica;
    printf("Escreva 3 números reais: ");
    scanf("%f%f%f",&num1,&num2,&num3);
    media_aritmetica=(num1+num2+num3)/3;
    media_geometrica=pow(num1*num2*num3,1.0/3.0);
    printf("Média aritmética de %f, %f e %f: %f\n",num1,num2,num3,media_aritmetica);
    printf("Média geométrica de %f, %f e %f: %f\n",num1,num2,num3,media_geometrica);
    return 0;
}
