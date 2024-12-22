#include <stdio.h>
#include <stdlib.h>

#define MX 100

void media_arit(int *n1, int *n2, float *m);
void vetor_divisiveis(int *n1, int *n2);

int main(){

    int n1,n2;
    float media;

    int *pn1 = &n1;
    int *pn2 = &n2;
    float *pm = &media;

    puts("Qual a faixa dos dois números?");
    scanf("%d%d",pn1,pn2);
    vetor_divisiveis(pn1,pn2);
    media_arit(pn1,pn2,pm);

    return 0;
}

void media_arit(int *n1, int *n2, float *m){
    int count = 0;

    for(int i = *n1+1; i<*n2; i++){
        *m+=i;
        count++;
    }

    printf("\nTotal de números: %d\n",count);
    printf("Média = %d/%d\n",(int)*m,count);

    *m/=count;
    
    printf("Média dos números entre %d e %d: %0.1f\n",*n1,*n2,*m);
}

void vetor_divisiveis(int *n1, int *n2){

    int *vet = NULL;
    int count = 0;

    for(int i = *n1+1; i<*n2; i++){
        count++;
    }

    if (!(vet = (int*)malloc(count*sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }

    count = 0;

    puts("Vetor com os números dentro da faixa:");
    
    for(int i = *n1+1; i<*n2; i++){
        *(vet+count) = i;
        printf("[%d]",*(vet+count));
        count++;
    }
}
