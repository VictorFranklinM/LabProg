#include <stdio.h>
#include <stdlib.h>

void termospi(int *t, float *v);

int main(){

    int termo;
    int *pt = &termo;
    float *pi = NULL;

    puts("Qual o termo?");
    scanf("%d",pt);
    if(!(pi = (float*)malloc(*pt*sizeof(float)))){
        puts("Memória indisponível.");
        exit(1);
    }

    termospi(pt,pi);
    
    for(int i = 0;i<*pt;i++){
        printf("Termo %d: %f\n",i+1,*(pi+i));
    }

    free(pi);
    return 0;
}

void termospi(int *t, float *v){
    for(int i=0;i<*t;i++){
        int sinal = 1;
        for(float div = 1;div<=(1+(i*2));div+=2){
            *(v+i)+=(4/(div))*sinal;
            sinal=-sinal;
        }
    }
}
