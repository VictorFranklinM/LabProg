#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned char **alocarmem(int *lin, int *col);
void preencher(unsigned char **matriz, int *lin, int *col);
void imprimir(unsigned char **matriz, int *lin, int *col);
void freeall(unsigned char **matriz, int *lin);
void calcularlbp(unsigned char **img, unsigned char **lbp, int *lin, int *col);
void calcularhistograma(unsigned char **matriz, int *lin, int *col, int *histograma);

int main(){
    int lin, col;
    int *pl = &lin;
    int *pc = &col;

    puts("Escreva a quantidade de linhas e colunas:");
    scanf("%d%d", pl, pc);
    
    unsigned char **img = alocarmem(pl, pc);
    preencher(img, pl, pc);
    puts("\nImagem de entrada:");
    imprimir(img, pl, pc);

    unsigned char **imglbp = alocarmem(pl, pc);
    calcularlbp(img, imglbp, pl, pc);
    puts("\nImagem LBP:");
    imprimir(imglbp, pl, pc);

    int histograma[256];
    calcularhistograma(imglbp, pl, pc, histograma);
    puts("\nHistograma:");
    for (int i = 0; i < 256; i++) {
        if (*(histograma + i) > 0) {
            printf("LBP %d: %d vezes\n", i, *(histograma + i));
        }
    }

    freeall(img, pl);
    freeall(imglbp, pl);

    return 0;
}

unsigned char **alocarmem(int *lin, int *col){
    unsigned char **matriz = NULL;
    if (!(matriz = (unsigned char**)malloc(*lin * sizeof(unsigned char*)))) {
        puts("Memória indisponível.");
        exit(1);
    }
    for (int i = 0; i < *lin; i++) {
        if (!(*(matriz + i) = (unsigned char*)malloc(*col * sizeof(unsigned char)))) {
            puts("Memória indisponível.");
            exit(1);
        }
    }
    return matriz;
}

void preencher(unsigned char **matriz, int *lin, int *col){
    srand(time(NULL));
    for (int i = 0; i < *lin; i++) {
        for (int j = 0; j < *col; j++) {
            *(*(matriz + i) + j) = rand() % 256;
        }
    }
}

void imprimir(unsigned char **matriz, int *lin, int *col){
    for (int i = 0; i < *lin; i++) {
        for (int j = 0; j < *col; j++) {
            printf("[%hhu] ", *(*(matriz + i) + j));
        }
        printf("\n");
    }
}

void freeall(unsigned char **matriz, int *lin){
    for (int i = 0; i < *lin; i++) {
        free(*(matriz + i));
    }
    free(matriz);
}

void calcularlbp(unsigned char **matriz, unsigned char **lbp, int *lin, int *col){
    int deslocamentos[8][2] = { 
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, 1},
        {1, 1}, {1, 0}, {1, -1},
        {0, -1}
    };

    for (int i = 0; i < *lin; i++) {
        for (int j = 0; j < *col; j++) {
            unsigned char valorlbp = 0;

            for (int bitPos = 0; bitPos < 8; bitPos++){
                int ni = i+deslocamentos[bitPos][0];
                int nj = j+deslocamentos[bitPos][1];

                if((ni>=0)&&(ni<*lin)&&(nj>=0)&&(nj<*col)){
                    if(*(*(matriz+ni)+nj)>=*(*(matriz+i)+j)){
                        (valorlbp)|=(1 << bitPos);
                    }
                }
            }
            *(*(lbp + i)+j) = valorlbp;
        }
    }
}

void calcularhistograma(unsigned char **matriz, int *lin, int *col, int *histograma){
    for (int i = 0; i < 256; i++) {
        *(histograma + i) = 0;
    }
    for (int i = 0; i < *lin; i++) {
        for (int j = 0; j < *col; j++) {
            (*(histograma + *(*(matriz + i) + j)))++;
        }
    }
}
