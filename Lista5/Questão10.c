#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int *alocarmem();
void preencher(int *vet, int *mx);
void imprimir(int *vet, int i);
void ocorrencias(int *vetin, int *vetout, int tam, int max);

int main(){
    int max;
    int *pma = &max;
    int *vetX = alocarmem(TAM);

    puts("Qual o intervalo (de 0 a N-1)?\nEx: N = 20 -> 0 a 19");
    scanf("%d",pma);

    preencher(vetX,pma);
    puts("\nVetor:");
    imprimir(vetX,TAM);

    int *vetF = alocarmem((*pma)-1);
    ocorrencias(vetX,vetF,TAM,*pma);
    printf("\nOcorrências (vezes que os números de 0 a %d apareceram):\n",(*pma)-1);
    imprimir(vetF,*pma);

    return 0;
}

int *alocarmem(int i){
    int *vet = NULL;
    if(!(vet = (int*)malloc(i*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

void preencher(int *vet, int *mx){
    srand(time(NULL));
    for(int i = 0; i<TAM; i++){
        *(vet+i) = rand()%(*mx);
    }
}

void imprimir(int *vet, int i){
    for(int k = 0; k<i; k++){
        printf("[%d]",*(vet+k));
    }
    printf("\n");
}

void ocorrencias(int *vetin, int *vetout, int tam, int max){
    for(int i = 0; i<max; i++){
        *(vetout+i) = 0;
    }
    for(int i = 0; i<tam; i++){
        for(int k = 0; k<max; k++){
            if(*(vetin+i)==k){
                (*(vetout+k))++;
            }
        }
    }
}
