#include <stdio.h>

void somar(int *n1, int *n2, int *soma);

int main(){
    int n1,n2,resultado;
    int *pn1 = &n1;
    int *pn2 = &n2;
    int *pr = &resultado;

    puts("Digite dois valores para somar.");
    scanf("%d%d",pn1,pn2);
    somar(pn1,pn2,pr);

    printf("Resultado da soma de %d e %d:\n",*pn1,*pn2);
    printf("[%p] %d\n",pr,*pr);

    return 0;
}

void somar(int *n1, int *n2, int *soma){
    *soma = *n1 + *n2;
}
