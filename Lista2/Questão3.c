#include <stdio.h>
int main(){
    int num;
    puts("Escreva um número positivo e inteiro para determinar o fatorial.");
    scanf("%d",&num);
    while(num<0){
        puts("Escreva um número positivo.");
        scanf("%d",&num);
    }
    printf("Fatorial de %d: ",num);
    for(int k=num-1; k>1; k--){
        num=num*k;
    }
    printf("%d\n",num);
    return 0;
}
