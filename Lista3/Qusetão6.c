#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

char *alocarmem();
char getstr(char *str);
void inverso(char *str);

int main() {
    char *str = alocarmem();

    getstr(str);    

    printf("Inverso da string \"%s\": ",str);
    inverso(str);
    
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

char getstr(char *str){
    printf("Digite uma string com até %d caracteres: ",TAM-1);
    fgets(str,TAM,stdin);
    str[strcspn(str,"\n")] = 0;
    return *str;
}

void inverso(char *str) {
    int i = strlen(str);
    for(i; i >= 0; i--){
        putchar(*(str+i));
    }
    printf("\n");
}
