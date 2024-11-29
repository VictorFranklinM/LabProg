#include <stdio.h>
int main(){
    int a,b,quant = 0;
    puts("Diga uma faixa de números para checar os números divisíveis por 3.");
    scanf("%d%d",&a,&b);
    printf("Números divisíveis por 3 entre %d e %d:\n",a,b);
    if(a<b){
        for(int i = a;i<=b;i++){
            i%3 ? quant : (++quant)&&printf("[%d]",i);
        }
    }else{
        for(int i = b;i<=a;i++){
            i%3 ? quant : (++quant)&&printf("[%d]",i);
        }
    }
    printf("\nHá um total de %d números divisíveis por 3 no intervalo.\n",quant);
    return 0;
}
