#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int *alocarint();
double *alocardouble();
char *alocarchar();
void preencherint(int *vetor);
void preencherdouble(double *vetor);
void preencherchar(char *vetor);
void imprimirint(int *vetor);
void imprimirdouble(double *vetor);
void imprimirchar(char *vetor);

int main() {

    int *vetint = alocarint();
    double *vetdouble = alocardouble();
    char *vetchar = alocarchar();

    puts("Digite os valores do vetor de inteiros:");
    preencherint(vetint);

    puts("Digite os valores do vetor de doubles:");
    preencherdouble(vetdouble);

    puts("Digite os valores do vetor de chars:");
    preencherchar(vetchar);

    printf("\nVetor de inteiros (cada elemento ocupa %ld bytes):\n",sizeof(int));
    imprimirint(vetint);
    printf("\nVetor de doubles (cada elemento ocupa %ld bytes):\n",sizeof(double));
    imprimirdouble(vetdouble);
    printf("\nVetor de chars (cada elemento ocupa %ld bytes):\n",sizeof(char));
    imprimirchar(vetchar);

    free(vetint);
    free(vetdouble);
    free(vetchar);

    return 0;
}

int *alocarint(){
    int *vet = NULL;
    if(!(vet = (int*)malloc(TAM*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

double *alocardouble(){
    double *vet = NULL;
    if(!(vet = (double*)malloc(TAM*sizeof(double)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

char *alocarchar(){
    char *vet = NULL;
    if(!(vet = (char*)malloc(TAM*sizeof(char)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return vet;
}

void preencherint(int *vetor){
    for (int i = 0; i<TAM; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d",(vetor+i));
    }
}

void preencherdouble(double *vetor){
    for (int i = 0; i<TAM; i++){
        printf("Elemento %d: ",i+1);
        scanf("%lf",(vetor+i));
    }
}

void preencherchar(char *vetor){
    while ((getchar()) != '\n');
    for (int i = 0; i<TAM; i++){
        printf("Elemento %d: ",i+1);
        scanf("%c",(vetor+i));
        while (getchar() != '\n');
    }
}

void imprimirint(int *vetor){
    for (int i = 0; i<TAM; i++){
        printf("[%p] %d\n",(vetor+i),*(vetor+i));
    }
}

void imprimirdouble(double *vetor){
    for (int i = 0; i<TAM; i++){
        printf("[%p] %f\n",(vetor+i),*(vetor+i));
    }
}

void imprimirchar(char *vetor){
    for (int i = 0; i<TAM; i++){
        printf("[%p] %c\n",(vetor+i),*(vetor+i));
    }
}
