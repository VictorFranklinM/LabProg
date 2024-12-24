#include <stdio.h>

void checkpali(int *n);

int main(){

    int num;
    int *pn = &num;

    puts("Escreva um inteiro de 5 dígitos.");
    scanf("%d",pn);
    checkpali(pn);

    return 0;
}

void checkpali(int *n){

    int num = 0;

    num = (*n/10000);
    num += ((*n%10000)/1000)*10;
    num += ((*n%1000)/100)*100;
    num += ((*n%100)/10)*1000;
    num += (*n%10)*10000;

    num==*n ? puts("É um palíndromo.") : puts("Não é um palíndromo.");
}
