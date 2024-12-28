#include <stdio.h>

int main(){

    int num = 2;

    puts("Pré-Decremento:");
    puts("O valor é alterado antes de ser impresso.");
    printf("Original: %d\n",num);
    printf("Decremento: %d\n",--num);
    printf("Final: %d\n",num);

    num = 2;

    puts("\nPós-Decremento:");
    puts("O valor é alterado depois de ser impresso.");
    printf("Original: %d\n",num);
    printf("Decremento: %d\n",num--);
    printf("Final: %d\n",num);

    return 0;
}
