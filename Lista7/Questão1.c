#include <stdio.h>
#include <stdlib.h>

void media(float, float, float*);

struct aluno{
    float n1;
    float n2;
    float *med;
};

int main(int argc, char *argv[]){
    struct aluno carlos;

    if(argc!=3){
        printf("Execução:\n\t%s <Nota 1> <Nota2>\n",argv[0]);
        exit(1);
    }

    carlos.n1 = atof(argv[1]);
    carlos.n2 = atof(argv[2]);

    if((carlos.n1 < 0) || (carlos.n1 > 10) || (carlos.n2 < 0) || (carlos.n2 > 10)){
        puts("Digite valores entre 0 e 10");
        exit(2);
    }

    media(carlos.n1, carlos.n2, carlos.med);

    printf("Média de %0.1f e %0.1f = %0.1f\n",carlos.n1, carlos.n2, *carlos.med);

    return 0;
}

void media(float v1, float v2, float *media){
    *media = (v1+v2) / 2;
}
