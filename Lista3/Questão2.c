#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

void checarchar(char *str,char *ch);

int main() {
    char *str = NULL;
    char ch;
    char *pc = &ch;

    if(!(str = (char*)malloc(TAM*sizeof(char)))){
        puts("Memória indisponível.");
        exit(1);
    }

    printf("Digite uma string com até %d caracteres: ",TAM-1);
    fgets(str,TAM,stdin);
    str[strcspn(str,"\n")] = 0;

    printf("Digite um caractere: ");
    scanf("%c",pc);
    while(*pc == '\n'){
        scanf("%c",pc);
    }

    checarchar(str,pc);

    free(str);

    return 0;
}

void checarchar(char *str,char *ch) {
    int aparece = 0;
    for(int i = 0; *(str+i) != '\0'; i++){
        if (*(str+i) == *ch) {
            aparece = 1;
        }
    }
    aparece ? printf("O caractere %c aparece na string \"%s\".\n",*ch,str) : printf("O caractere %c não aparece na string \"%s\".\n",*ch,str);
}
