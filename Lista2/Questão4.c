#include <stdio.h>
int main(){
    unsigned char jose = 150,pedro = 110,ano = 0;
    for(ano;jose>=pedro;ano++){
        jose=150+(ano*2);
        pedro=110+(ano*3);
    }
    printf("Pedro será maior que José em %d anos.\n",ano);
    printf("José = %d cm ; Pedro = %d cm\n",jose,pedro);
    return 0;
}
