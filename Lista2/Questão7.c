#include <stdio.h>
int main(){
    float a,b;
    puts("Escreva um valor A para dividir por um valor B.");
    scanf("%f%f",&a,&b);
    while(b==0){
        puts("Não é possível dividir por zero, escolha outro valor.");
        scanf("%f",&b);
    }
    printf("Divisão de %0.2f por %0.2f = %0.2f\n",a,b,a/b);
    return 0;
}
