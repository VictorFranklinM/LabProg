#include <stdio.h>

unsigned char bin(int num);

int main(){

    for(int i = 1;i<=256;i++){
        printf("Decimal: %d | ",i);
        printf("Binário: ");
        bin(i);
        printf(" | Octal: %o | ",i);
        printf("Hexadecimal: %x\n",i);
    }

    return 0;
}

unsigned char bin(int num){
    for(int i = 8;i>=0;i--){
        (num>>i)&1 ? putchar('1') : putchar('0');
    }
}
