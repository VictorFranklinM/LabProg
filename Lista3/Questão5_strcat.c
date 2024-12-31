#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

char *alocarmem(int i);
char getstr(char *str);
void concatenar(char *str1, char *str2, char *resultado);

int main(){
    char *str1 = alocarmem(1);
    char *str2 = alocarmem(1);
    char *conca = alocarmem(2);

    getstr(str1);
    getstr(str2);
    concatenar(str1,str2,conca);
    printf("String concatenada: %s\n",conca);

    free(str1);
    free(str2);
    free(conca);

    return 0;
}

char *alocarmem(int i){
    char *str = NULL;
    if(!(str = (char*)malloc((TAM*i)*sizeof(char)))){
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

void concatenar(char *str1, char *str2, char *resultado){
    strcat(resultado,str1);
    strcat(resultado,str2);
}
