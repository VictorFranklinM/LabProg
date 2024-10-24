#include <stdio.h>
int main(){
    float conta;
    printf("Qual o valor da conta? \n");
    scanf("%f\n",&conta);
    printf("Conta + 10%% = %0.2f\n",conta*1.1);
    return 0;
}
