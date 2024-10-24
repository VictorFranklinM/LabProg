#include <stdio.h>
int main(){
    int num, num2;
    printf("Escreva um número de 3 dígitos. ");
    scanf("%d",&num);
    num2 = (num%10)*100 + ((num/10)%10)*10 + (num/100);
    printf("%d invertido: %d\n",num,num2);
    return 0;
}
