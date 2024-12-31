#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

char *alocarmem();
void qtdchar(char *str) ;

int main(){
    char *str = alocarmem();

    printf("Escreva uma string com até %d caracteres: ",TAM-1);
    fgets(str,TAM,stdin);
    str[strcspn(str,"\n")] = 0;
    qtdchar(str);

    free(str);

    return 0;
}

char *alocarmem(){
    char *str = NULL;
    if(!(str = (char*)malloc(TAM*sizeof(char)))){
        puts("Memória indisponível.");
        exit(1);
    }
    return str;
}

void qtdchar(char *str){
    int qtd = 0;
    for(qtd; *(str+qtd) != '\0'; qtd++);
    printf("A string \"%s\" tem %d caracteres.\n",str,qtd);
}
