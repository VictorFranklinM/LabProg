#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarMem(int, int*);
void preencher(int, int*);
void imprimir(int, int*);
void menorEnd(int, int*);

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Execução:\n\t %s <Tam do vetor>\n",argv[0]);
        exit(1);
    }

    void (*pFunc[])(int, int*)={preencher,imprimir,menorEnd};

    int *vet = alocarMem(atoi(argv[1]),vet);

    for(int i = 0; i<3; i++){
        pFunc[i](atoi(argv[1]),vet);
    }

    free(vet);

    return 0;
}

int *alocarMem(int tam, int *vet){
    if(!(vet = (int*)malloc(tam * sizeof(int)))){
        puts("Memória indisponível.");
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
        printf("[%p] %d\n",(vet+i),*(vet+i));
    }
}

void menorEnd(int tam, int *vet){
    int *menor = vet;
    for(int i = 0; i!=tam; i++){
        if(*(menor) > *(vet+i)){
            menor = (vet+i);
        }
    }
    printf("\nEndereço e valor do menor elemento: [%p] %d\n",menor,*menor);
}
