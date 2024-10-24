#include <stdio.h>
int main(){
    int horas;
    int minutos;
    int segundos;
    printf("Escreva o total de horas: ");
    scanf("%d",&horas);
    printf("Escreva o total de minutos: ");
    scanf("%d",&minutos);
    printf("Escreva o total de segundos: ");
    scanf("%d",&segundos);
    printf("Segundos = %d\n",((horas*60+minutos)*60)+segundos);
        return 0;
}
