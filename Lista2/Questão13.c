#include <stdio.h>
int main(){
    int a,b,soma = 0;
    puts("Diga uma faixa de números para fazer o somatório de todos os seus pares.");
    scanf("%d%d",&a,&b);
    if(a<b){
        for(int i = a;i<=b;i++){
            i%2 ? soma : (soma=soma+i);
        }
    }else{
        for(int i = b;i<=a;i++){
            i%2 ? soma : (soma=soma+i);
        }
    }
    printf("Somatório de todos os termos pares entre %d e %d: %d\n",a,b,soma);
    return 0;
}
