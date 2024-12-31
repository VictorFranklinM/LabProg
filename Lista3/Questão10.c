#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define MX 10

int **alocarmem();
void preencher(int **matriz);
void imprimir(int **matriz);
void freeall(int **matriz);
int checarnum(int **matriz, int *num);

int main() {
    int num;
    int **matriz = alocarmem();
    int *pn = &num;

    preencher(matriz);
    imprimir(matriz);

    puts("Digite um número para checar quantas vezes ele aparece na matriz.");
    scanf("%d",pn);
    printf("O número %d aparece %d vezes na matriz.\n",*pn,checarnum(matriz,pn));

    freeall(matriz);

    return 0;
}

int **alocarmem(){
    int **matriz = NULL;
    if(!(matriz = (int **)malloc(TAM*sizeof(int *)))){
        puts("Memória indisponível.");
        exit(1);
    }
    for(int i = 0; i<TAM; i++){
        if(!(*(matriz+i) = (int *)malloc(TAM*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
        }
    }
    return matriz;
}

void preencher(int **matriz){
    srand(time(NULL));
    for(int i = 0; i<TAM; i++){
        for (int j = 0; j<TAM; j++){
            *(*(matriz+i)+j)=rand()%MX;
        }
    }
}

void imprimir(int **matriz){
    for(int i = 0; i<TAM; i++){
        for(int j = 0; j<TAM; j++){
            printf("[%d]",*(*(matriz+i)+j));
        }
        printf("\n");
    }
}

void freeall(int **matriz){
    for(int i = 0; i<TAM; i++){
        free(*(matriz+i));
    }
    free(matriz);
}

int checarnum(int **matriz, int *num){
    int count = 0;
    for(int i = 0; i<TAM; i++){
        for(int j = 0; j<TAM; j++){
            if((*(*(matriz+i)+j))==(*num)){
                count++;
            }
        }
    }
    return count;
}
