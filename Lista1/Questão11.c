#include <stdio.h>
int main(){
    int num1;
    int num2;
    int diferença;
    int quociente;
    int resto;
    printf("Escreva dois números separados por um espaço: ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        diferença = num1-num2;
        quociente = num1/num2;
        resto = num1 % num2;     
    }else if (num2>num1){
        diferença = num2-num1;
        quociente = num2/num1;    
        resto = num2 % num1;    
    }
    printf("Soma de %d e %d: %d\n",num1,num2,num1+num2);
    printf("Produto de %d e %d: %d\n",num1,num2,num1*num2);
    printf("Diferença entre %d e %d: %d\n",num1,num2,diferença);
    printf("Quociente de %d e %d: %d\n", num1,num2,quociente);
    printf("Resto da divisão de %d e %d: %d\n",num1,num2,resto);
    return 0;
}
