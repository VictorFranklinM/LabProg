#include <stdio.h>

void trocarval(int *n1, int *n2);

int main(){
    int n1,n2;
    int *pn1 = &n1;
    int *pn2 = &n2;

    puts("Digite dois valores para trocar.");
    scanf("%d%d",pn1,pn2);
    
    printf("Valor 1:\n[%p] %d\nValor 2:\n[%p] %d\n",pn1,*pn1,pn2,*pn2);
    trocarval(pn1,pn2);
    puts("\nTrocando...\n");
    printf("Valor 1:\n[%p] %d\nValor 2:\n[%p] %d\n",pn1,*pn1,pn2,*pn2);

    return 0;
}

void trocarval(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
