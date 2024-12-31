#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MX 100

void preencher(float *n);
void imprimir(float *n);
void maiormenor(float *n,float *ma,float *me);

int main(){

    float maior,menor;
    float *vet = NULL;
    float *pma = &maior;
    float *pme = &menor;

    if(!(vet = (float*)malloc(TAM*sizeof(float)))){
        puts("Memória indisponível.");
        exit(1);
    }

    preencher(vet);
    imprimir(vet);
    maiormenor(vet,pma,pme);
    printf("Maior: %0.f | Menor: %0.f\n",*pma,*pme);
    printf("Soma: %0.f\n",*pma+*pme);
    free(vet);

    return 0;
}

void preencher(float *n){
    srand(time(NULL));
    for(int i = 0; i<TAM; i++){
        *(n+i)=rand()%MX;
    }
}

void imprimir(float *n){
    for(int i =0; i<TAM; i++){
        printf("[%0.f]",*(n+i));
    }
    printf("\n");
}

void maiormenor(float *n,float *ma,float *me){
    for(int i = 0; i<TAM; i++){

        if(i==0){

            *me = *(n+i);
            *ma = *(n+i);
        }
        else{

            if(*me>*(n+i)){
                *me = *(n+i);
            }

            if(*ma<*(n+i)){
                *ma = *(n+i);
            }
        }
    }
}
