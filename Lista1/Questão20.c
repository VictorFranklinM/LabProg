#include <stdio.h>
int main(){
    int num1,num2;
    printf("Escreva dois números inteiros: ");
    scanf("%d%d",&num1,&num2);
    (num1 % num2==0) ?
    printf("%d é multiplo de %d\n",num1,num2):
    printf("%d não é multiplo de %d\n",num1,num2);
    return 0;
}
