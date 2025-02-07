#include <stdio.h>
#include <stdlib.h>

void somar(int, int, int*);
void multiplicar(int, int, int*);

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("Execução: \n\t %s <Operação> <Num1> <Num2>\n",*argv);
        exit(1);
    }

    int op = atoi(argv[1]);

    if((op<0) || (op>1)){
        puts("Operação não implementada.\nUse 0 para somar ou 1 para multiplicar.");
        exit(2);
    }

    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    int c;

    void (*pFunc[])(int,int,int*)={somar,multiplicar};
    (*pFunc[op])(a,b,&c);
    
    printf("%d\n",c);

    return 0;
}

void somar(int a, int b, int *c){
    *c = a+b;
    printf("Soma de %d + %d = ",a,b);
}

void multiplicar(int a, int b, int *c){
    *c = a*b;
    printf("Multiplicação de %d X %d = ",a,b);
}
