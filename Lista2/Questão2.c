#include <stdio.h>
unsigned char dia(unsigned char num){
    switch (num){
        case 0:
            puts("Código encerrado.");
            break;
        case 1:
            puts("Domingo.");
            break;
        case 2:
            puts("Segunda-feira.");
            break;
        case 3:
            puts("Terça-feira.");
            break;
        case 4:
            puts("Quarta-feira.");
            break;
        case 5:
            puts("Quinta-feira.");
            break;
        case 6:
            puts("Sexta-feira.");
            break;
        case 7:
            puts("Sábado.");
            break;
        default:
            puts("Dia inválido.");
            break;
    }
    return num;
}
int main(){
    unsigned char num = 1;
    puts("Quais os dias da semana?");
    while(num!=0){
        scanf("%hhu",&num);
        dia(num);
    }
    return 0;
}
