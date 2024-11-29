#include <stdio.h>
#include <math.h>
int main(){
    int num;
    for (num=15;num<=90;num++){
        num%4 ? num : printf("%d é divisível por 4 e seu quadrado é: %d\n",num,(int)pow(num,2));
    }
    return 0;
}
