#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

char *alocarmem();
char getstr(char *str);
void checkigual(char *s1, char *s2);

int main(){
    char *str1 = alocarmem();
    char *str2 = alocarmem();

    getstr(str1);
    getstr(str2);

    checkigual(str1,str2);

    free(str1);
    free(str2);

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

char getstr(char *str){
    printf("Digite uma string com até %d caracteres: ",TAM-1);
    fgets(str,TAM,stdin);
    str[strcspn(str,"\n")] = 0;
    return *str;
}

void checkigual(char *s1, char *s2){
    (!(strcmp(s1,s2))) ? puts("As strings são iguais.") : puts("As strings são diferentes.");
}
