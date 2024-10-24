#include <stdio.h>
int main(){
    int seg,min,hora;
    printf("Quantos segundos? ");
    scanf("%d",&seg);
    hora = seg/3600;
    min = (seg%3600)/60;
    seg = seg%60;
    printf("Horas: %d ; Minutos: %d ; Segundos: %d\n",hora,min,seg);
    return 0;
}
