#include <stdio.h>
#include <stdlib.h>

void esconder_bits(unsigned char x, unsigned char y, unsigned char *valores);
unsigned char *alocar_vetor(unsigned char y);
unsigned char bin(int num);

int main() {

    unsigned char x=0,y=0;
    unsigned char *valores = NULL;

    puts("Digite o valor de X (0 a 255): ");
    scanf("%hhu",&x);
    bin(x);
    printf("\n");
    puts("Digite o valor de Y (deve ser maior ou igual a 5): ");
    while(y<5){
        scanf("%hhu",&y);
    }
    bin(y);
    printf("\n");

    valores = alocar_vetor(y);
    esconder_bits(x,y,valores);
    puts("Valores com bits de X ocultos:");
    for (int i = 0; i < 9; i++) {
        printf("Elemento %d: %hhu\n",(y-4)+i,*(valores+i));
        bin(*(valores+i));
        printf("\n");
    }
    free(valores);

    return 0;
}

unsigned char *alocar_vetor(unsigned char y){
    unsigned char *vetor = NULL;
    if(!(vetor = (unsigned char*)malloc(9*sizeof(unsigned char)))){
        puts("Memória indisponível.");
        exit(1);
    }
    for(int i = 0;i < 9;i++){
        *(vetor+i) = (y-4)+i;
    }
    return vetor;
}

void esconder_bits(unsigned char x,unsigned char y,unsigned char *valores) {
    for (int i = 0;i < 9;i++) {
        *(valores+i) = (*(valores+i)&~1)|((x >> i) & 1);
    }
}

unsigned char bin(int num){
    for(int i = 8;i>=0;i--){
        (num>>i)&1 ? putchar('1') : putchar('0');
    }
}
