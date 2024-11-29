#include <stdio.h>
int main(){
    int num;
    puts("Digite um inteiro para ver a tabuada.");
    scanf("%d",&num);
    for (int i = 1;i<=10;i++){
        printf("%dx%d = %d\n",num,i,num*i);
    }
    return 0;
}
