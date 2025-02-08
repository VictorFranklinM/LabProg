#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *alocarMem(int, int*);
void preencher(int, int*);
void imprimir(int, int*);
void normal(int, int*, float*, int*, int*);
void imprimirNormal(int, float*);

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Execucao:\n\t %s <Tam do vetor>\n",argv[0]);
        exit(1);
    }

    int *vetor = alocarMem(atoi(argv[1]), vetor);
    preencher(atoi(argv[1]), vetor);
    imprimir(atoi(argv[1]), vetor);
    printf("\n");

    int *min, *max;
    min = vetor;
    max = vetor;

    for(int i = 0; i < atoi(argv[1]); i++){
        if(*min > *(vetor+i)){
            min = (vetor+i);
        }
        if(*max < *(vetor+i)){
            max = (vetor+i);
        }
    }

    printf("Min e Max: %d e %d\n\n", *min, *max);

    float *vetorNorm = (float*)malloc(atoi(argv[1]) * sizeof(float));
    if (!vetorNorm) {
        puts("Memoria indisponivel.");
        exit(2);
    }

    normal(atoi(argv[1]), vetor, vetorNorm, min, max);
    imprimirNormal(atoi(argv[1]), vetorNorm);

    free(vetor);
    free(vetorNorm);
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

void normal(int tam, int *vet, float *vetNorm, int *min, int *max){
    for(int i = 0; i < tam; i++){
        vetNorm[i] = (float)(*(vet+i) - *min) / (*max - *min);
    }
}

void imprimirNormal(int tam, float *vetNorm){
    for(int i = 0; i<tam; i++){
        printf("[%p] %.2f\n", (vetNorm+i), vetNorm[i]);
    }
}
