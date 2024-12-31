#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int **alocarmem();
void lermatriz(int **matriz);
void imprimirdiag(int **matriz);
void freeall(int **matriz);

int main() {
    int **matriz = alocarmem();

    puts("Digite os elementos da matriz 3x3:");
    lermatriz(matriz);

    puts("Elementos da diagonal principal:");
    imprimirdiag(matriz);
    
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

void lermatriz(int **matriz){
    for(int i = 0; i<TAM; i++){
        for(int j = 0; j<TAM; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",(*(matriz+i)+j));
        }
    }
}

void imprimirdiag(int **matriz){
    for(int i = 0; i<TAM; i++){
        printf("[%d]",*(*(matriz+i)+i));
    }
    printf("\n");
}

void freeall(int **matriz){
    for(int i = 0; i<TAM; i++){
        free(*(matriz+i));
    }
    free(matriz);
}
