#include <stdio.h>
int main(){
    int n, maior, menor;
    puts("Digite um valor n:");
    scanf("%d",&n);
    maior=n,menor=n;
    while(n!=0){
        printf("Menor = %d ; Maior = %d\n",menor,maior);
        puts("Digite um valor n:");
        scanf("%d",&n);
        menor>n&&n!=0 ? menor=n : menor;
        maior<n ? maior=n : maior;
    }
    puts("Código encerrado.");
    return 0;
}
