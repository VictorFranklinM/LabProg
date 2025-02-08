#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarMem(int, int*);
void preencher(int, int*);
void imprimir(int, int*);
void minMaxEnd(int, int*, int**);

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Execucao:\n\t %s <Tam do vetor>\n",argv[0]);
        exit(1);
    }

    int *vet = alocarMem(atoi(argv[1]), vet);
    int *end[2] = {NULL, NULL};

    preencher(atoi(argv[1]),vet);
    imprimir(atoi(argv[1]),vet);

    minMaxEnd(atoi(argv[1]),vet,end);
    
    printf("\nEndereco e valor do menor elemento: [%p] %d\n", end[0], *end[0]);
    printf("Endereco e valor do maior elemento: [%p] %d\n", end[1], *end[1]);
    
    free(vet);
    return 0;
}

int *alocarMem(int tam, int *vet){
    if(!(vet = (int*)malloc(tam * sizeof(int)))){
        puts("Memoria indisponivel.");
        exit(1);
    }
    return vet;
}

void preencher(int tam, int *vet){
    srand(time(NULL));
    for(int i = 0; i<tam; i++){
        *(vet+i) = rand()%100;
    }
}

void imprimir(int tam, int *vet){
    for(int i = 0; i<tam; i++){
        printf("[%p] %d\n", (vet+i), *(vet+i));
    }
}

void minMaxEnd(int tam, int *vet, int **end){
    end[0] = vet;
    end[1] = vet;
    
    for(int i = 1; i < tam; i++){
        if(*end[0] > *(vet + i)){
            end[0] = (vet+i);
        }
        if(*end[1] < *(vet + i)){
            end[1] = (vet+i);
        }
    }
}
