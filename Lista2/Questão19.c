#include <stdio.h>
#define MX 100
void media_arit(int *n1, int *n2, float *m);

int main(){
    int n1,n2;
    float media;
    int *pn1 = &n1;
    int *pn2 = &n2;
    float *pm = &media;
    puts("Qual a faixa dos dois números?");
    scanf("%d%d",pn1,pn2);
    media_arit(pn1,pn2,pm);
    printf("Média dos números entre %d e %d: %0.1f\n",n1,n2,media);
    return 0;
}
void media_arit(int *n1, int *n2, float *m){
    int count = 0;
    for(int i = *n1+1; i<*n2; i++){
        *m+=i;
        count++;
    }
    *m/=count;
}
