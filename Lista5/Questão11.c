#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int *alocarmem();
int **alocarmat(int *tam);
void preencher(int *vetor, int *mx);
void imprimir(int *vet);
void preenchermat(int **matriz, int *X, int *Y, int *N);
void imprimirmat(int **matriz, int *N);
void freeall(int **matriz, int *N);

int main() {
    int n;
    int *pn = &n;

    int *vetX = alocarmem();
    int *vetY = alocarmem();

    puts("Qual o intervalo (de 0 a N-1)?\nEx: N = 20 -> 0 a 19");
    scanf("%d", pn);

    srand(time(NULL));

    preencher(vetX, pn);
    preencher(vetY, pn);
    puts("Vetor X:");
    imprimir(vetX);
    puts("Vetor Y:");
    imprimir(vetY);

    int **mat = alocarmat(pn);
    preenchermat(mat, vetX, vetY, pn);
    puts("\nMatriz:");
    imprimirmat(mat, pn);

    free(vetX);
    free(vetY);
    freeall(mat, pn);

    return 0;
}

int *alocarmem() {
    int *vet = (int *)malloc(TAM * sizeof(int));
    if (!vet) {
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

int **alocarmat(int *tam) {
    int **M = (int **)malloc(*tam * sizeof(int *));
    if (!M) {
        puts("Memória indisponível.");
        exit(1);
    }
    for (int i = 0; i < *tam; i++) {
        M[i] = (int *)malloc(*tam * sizeof(int));
        if (!M[i]) {
            puts("Memória indisponível.");
            exit(1);
        }
    }
    return M;
}

void preencher(int *vet, int *mx) {
    for (int i = 0; i < TAM; i++) {
        *(vet + i) = rand() % (*mx);
    }
}

void imprimir(int *vet) {
    for (int k = 0; k < TAM; k++) {
        printf("[%d]", *(vet + k));
    }
    printf("\n");
}

void preenchermat(int **matriz, int *X, int *Y, int *N) {
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *N; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int k = 0; k < TAM; k++) {
        matriz[X[k]][Y[k]]++;
    }
}

void imprimirmat(int **matriz, int *N) {
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *N; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}

void freeall(int **matriz, int *N) {
    for (int i = 0; i < *N; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
