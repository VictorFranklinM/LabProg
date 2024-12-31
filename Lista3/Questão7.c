#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MX 20

int *alocarmem();
void preencher(int *vet);
void imprimir(int *vet);
float mediarit(int *vet);
float mediageo(int *vet);

int main(){
    int *vet = alocarmem();

    preencher(vet);
    imprimir(vet);
    printf("Média aritmética: %0.2f\n",mediarit(vet));
    printf("Média geométrica: %0.2f\n",mediageo(vet));

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

void preencher(int *vet){
    srand(time(NULL));
    for(int i = 0; i<TAM; i++){
        *(vet+i)=rand()%MX;
    }
}

void imprimir(int *vet){
    for(int i = 0; i<TAM; i++){
        printf("[%d]",*(vet+i));
    }
    printf("\n");
}

float mediarit(int *vet){
    float media = 0;
    int count = 0;
    for(int i = 0; i<TAM; i++,count++){
        media+=*(vet+i);
    }
    media/=count;
    return media;
}

float mediageo(int *vet){
    float media = 0;
    int count = 0;
    for(int i = 0; i<TAM; i++,count++){
        media+=*(vet+i);
    }
    media=pow(media,((float)1/count));
    return media;
}
