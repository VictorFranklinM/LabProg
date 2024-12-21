#include <stdio.h>
#define TABULEIRO 64
void preencher(unsigned long long *g, unsigned long long*gt){
    for(int quadro = 0;quadro<TABULEIRO;quadro++){
        !quadro ? (*g=1)&&(*gt=1) : (*g *= 2)&&(*gt += *g);
    }
}
int main(){
    unsigned long long graos = 0, graos_totais = 0;
    unsigned long long *pg = &graos;
    unsigned long long *pgt = &graos_totais;
    preencher(pg,pgt);
    printf("Grãos totais: %llu\n",graos_totais);
    return 0;
}   
