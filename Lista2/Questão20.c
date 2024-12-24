#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define RANGE 1

int qntdimp();
int *alocarmem(int tam);
void acharimp(int *v);
void fatorial(int *f, int *v, int qtd);

int main(){
    int tam = qntdimp();
    int *imp = alocarmem(tam);
    int *fat = alocarmem(tam);
    acharimp(imp);
    fatorial(fat,imp,tam);
    free(imp);
    free(fat);
    return 0;
}

int qntdimp(){
    int count=0;
    for(int i = RANGE;i<=MAX;i++){
        if(i%2!=0){
            count++;
        }
    }
    printf("Quantidade de ímpares: %d\n",count);
    return count;
}

int *alocarmem(int tam){
    int *v = NULL;
    if(!(v=(int*)malloc(tam*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return v;
}

void acharimp(int *v){
    int count=0;
    printf("\nÍmpares:\n\n");
    for(int i = RANGE;i<=MAX;i++){
        if(i%2!=0){
            *(v+count)=i;
            printf("[%p] %d\n",(v+count),*(v+count));
            count++;
        }
    }
}

void fatorial(int *f, int *v, int qtd){
    printf("\nFatoriais:\n\n");
    for(int i = 0; i<qtd;i++){
        *(f+i)=1;
        for(int k = *(v+i);k>0;k--){
            *(f+i)*=k;
        }
        printf("[%p] %d\n",(f+i),*(f+i));
    }
}
