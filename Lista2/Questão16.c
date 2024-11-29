#include <stdio.h>
int main(){
    unsigned char num=0;
    int soma3=0,soma5=0;
    puts("Números divisíveis por 3 de 0 a 100:");
    for (num;num<=200;num++){
        if((num<=100)&&(num%3==0)){
            printf("[%hhu]",num);
            soma3=soma3+num;
        }if((num<=200)&&(num>=100)&&(num%5==0)){
            if(num==100){
                printf("\nNúmeros divisíveis por 5 de 100 a 200:\n");
            }
            printf("[%hhu]",num);
            soma5=soma5+num;
        }
    }
    printf("\nSomatório dos números de 0 a 100 divisíveis por 3: %d\n",soma3);
    printf("Somatório dos números de 100 a 200 divisíveis por 5: %d\n",soma5);
    return 0;
}
