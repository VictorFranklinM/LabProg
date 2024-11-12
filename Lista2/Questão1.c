#include <stdio.h>
int main(){
    unsigned char dia = 1;
    puts("Quais os dias da semana?");
    while(dia!=0){
        scanf("%hhu",&dia);
        switch (dia){
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
    }
    return 0;
}
