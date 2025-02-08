#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 20

float *alorcarMem(int, float*);
void preencher(int, float*);
void imprimir(int, float*);
void somar(int, float*);

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Execucao:\n\t %s <Tam do vetor>\n",argv[0]);
        exit(1);
    }

    float *vet = alorcarMem(atoi(argv[1]),vet);
    preencher(atoi(argv[1]),vet);
    imprimir(atoi(argv[1]),vet);
    somar(atoi(argv[1]),vet);

    free(vet);

    return 0;
}

float *alorcarMem(int tam, float *vet){
    if(!(vet = (float*)malloc(tam * sizeof(float)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

void preencher(int tam, float *vet){
    srand(time(NULL));
    for(int i = 0; i<tam; i++){
        *(vet+i) = rand()%MX;
    }
}

void imprimir(int tam, float *vet){
    for(int i = 0; i<tam; i++){
        printf("[%p] %0.1f\n", (vet+i), *(vet+i));
    }
}

void somar(int tam, float *vet){
    float som = 0;
    for(int i = 0; i<tam; i++){
        som += *(vet+i);
    }
    printf("Soma dos elementos = %0.1f\n",som);
}
