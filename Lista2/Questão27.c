#include <stdio.h>

int main() {

    int num;
    int maior = 0, menor = 0;
    int *pn = &num;
    int *pma = &maior;
    int *pme = &menor;

    puts("Digite números inteiros (digite um número negativo e par para sair):");

    while (1) {
        scanf("%d",pn);        
        if((*pn<0)&&(*pn%2==0)){
            break;
        }

        if(*pma == 0 && *pme == 0){
            *pma = num;
            *pme = num;
        }

        else{

            if(*pn>*pma){
                *pma = *pn;
            }

            if(num < menor){
                *pme = *pn;
            }
            printf("Maior número: %d\n",*pma);
            printf("Menor número: %d\n",*pme);
            printf("Produto do maior pelo menor: %d\n",maior*menor);
        }
    }

    return 0;
}
