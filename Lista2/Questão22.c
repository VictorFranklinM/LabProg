#include <stdio.h>

int contar7(int *num);

int main(){

    int num;
    int *pn = &num;
    
    puts("Escreva um número inteiro qualquer.");
    scanf("%d",pn);
    printf("O número 7 aparece %d vezes no número %d.\n",contar7(pn),*pn);

    return 0;
}

int contar7(int *num){
    int count = 0;
    for(int i = *num;i!=0;i/=10){
        i<0 ? i=-i : i;
        i%10==7 ? count++ : count;
    }
    return count;
}
