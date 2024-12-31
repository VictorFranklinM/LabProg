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

void ordenar(int *vet){
    int temp;
    for(int i = 0; i<TAM; i++){
        for(int j = 0; j<TAM-i; j++){
            if(*(vet+j)>*(vet+j+1)){
                temp = *(vet+j);
                *(vet+j)=*(vet+j+1);
                *(vet+j+1)=temp;
            }
        }
    }
}
