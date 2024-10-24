#include <stdio.h>
int main(){
    float ganho_por_dia = 50.25;
    int dias;
    float pagamento;
    printf("Quantos dias o vendedor trabalhou? ");
    scanf("%d",&dias);
    if(dias<=0){
        pagamento=0;
        dias = 0;
    }else if(dias<=10){
        pagamento=dias*ganho_por_dia;
    }else if(dias>10&&dias<=20){
        pagamento=(dias*ganho_por_dia)*1.2;
    }else if(dias>20){
        pagamento=(dias*ganho_por_dia)*1.3;
    }
    pagamento=pagamento*0.9;
    printf("O vendedor trabalhou %d dias e ganhou R$%0.2f\n",dias,pagamento);
    return 0;
}
