#include <stdio.h>

int main(){
    int num=1,menor=0;
    int *pn = &num;
    int *pm = &menor;

    puts("Escreva números inteiros. (O programa se encerra ao digitar 0)");
    while(*pn!=0){
        scanf("%d",pn);
        if((*pm==0)||(*pm>*pn)){
            *pm=*pn;
            printf("Menor valor: %d\n",*pm);
        }
    }
    puts("Programa encerrado.");
    printf("Menor valor: %d\n",*pm);
    return 0;
}
