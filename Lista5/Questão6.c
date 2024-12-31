#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

char *alocarmem();
void copiarstr(char *str1, char *str2);

int main(){
    char *str1 = alocarmem();
    char *str2 = alocarmem();

    printf("Escreva uma string com até %d caracteres: ",TAM-1);
    fgets(str1,TAM,stdin);
    str1[strcspn(str1,"\n")] = 0;

    copiarstr(str1,str2);

    printf("String 1: \"%s\"\n",str1);
    printf("String 2: \"%s\"\n",str2);

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

void copiarstr(char *str1, char *str2){
    for(int i = 0; *(str1+i)!=0; i++){
        *(str2+i) = *(str1+i);
    }
}
