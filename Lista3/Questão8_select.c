#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int *alocarmem();
void preencher(int *vet,int *min, int *max);
void imprimir(int *vet);
void ordenar(int *vet);

int main(){
    int min,max;
    int *vet = alocarmem();
    int *pmin = &min;
    int *pmax = &max;

    puts("Qual o intervalo dos valores?\nExemplo: 0 a 20");
    scanf("%d%d",pmin,pmax);

    preencher(vet,pmin,pmax);
    puts("Vetor:");
    imprimir(vet);
    puts("\nVetor ordenado:");
    ordenar(vet);
    imprimir(vet);

    free(vet);

    return 0;
}

int *alocarmem(){
    int *vet = NULL;
    if(!(vet = (int*)malloc(TAM*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }
}

void preencher(int *vet, int *min, int *max){
    srand(time(NULL));
    for(int i = 0; i<TAM; i++){
        *(vet+i)=*min+(rand()%(*max+1));
    }
}

void imprimir(int *vet){
    for(int i = 0; i<TAM; i++){
        if((i%20==0)&&(i!=0)){
            printf("\n");
        }
        printf("[%d]",*(vet+i));
    }
    printf("\n");
}

void ordenar(int *vet) {
    int min_idx, temp;
    for(int i = 0; i<TAM-1; i++) {
        min_idx = i;

        for(int j = i+1; j<TAM; j++) {
            if((*(vet+j))<(*(vet+min_idx))){
                min_idx = j;
            }
        }
        temp = *(vet + i);
        *(vet + i) = *(vet + min_idx);
        *(vet + min_idx) = temp;
    }
}
