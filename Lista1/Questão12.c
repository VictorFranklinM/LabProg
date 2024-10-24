#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Escreva dois valores inteiros: ");
    scanf("%d%d",&a,&b);
    printf("A = %d; B = %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("A = %d; B = %d\n",a,b);
    return 0;
}
