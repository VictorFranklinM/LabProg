#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    puts("Escreva os valores de A e B.");
    scanf("%d%d",&a,&b);
    if(a>b){
        for(b;b<=a;b++){
        b%4 ? b : printf("%d é divisível por 4 e seu quadrado é: %d\n",b,(int)pow(b,2));
        }
    }else{
        for (a;a<=b;a++){
            a%4 ? a : printf("%d é divisível por 4 e seu quadrado é: %d\n",a,(int)pow(a,2));
        }
    }
    return 0;
}
