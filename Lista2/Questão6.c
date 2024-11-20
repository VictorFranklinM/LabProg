#include <stdio.h>
int main(){
    int candidatos=1;
    unsigned char confirm=0,votos[4]={0,0,0,0},total=0;
    puts("Opções de voto:\n5-Paulo / 7-Renata / 0-Branco\nQualquer outro número é contabilizado como voto nulo, e caso negativo, encerra a votação.");
    while (candidatos>=0){
        puts("Digite seu voto:");
        scanf("%d",&candidatos);
        switch (candidatos){
        case 5:
            puts("Deseja confirmar seu voto para Paulo?");
            puts("Digite 1 para sim e 0 para não.");
            scanf("%hhu",&confirm);
            confirm ? votos[0]++ : votos[0];
        break;
        case 7:
            puts("Deseja confirmar seu voto para Renata?");
            puts("Digite 1 para sim e 0 para não.");
            scanf("%hhu",&confirm);
            confirm ? votos[1]++ : votos[1];
        break;
        case 0:
            puts("Deseja confirmar seu voto em branco?");
            puts("Digite 1 para sim e 0 para não.");
            scanf("%hhu",&confirm);
            confirm ? votos[2]++ : votos[2];
        break;
        default:
            if (candidatos<0){
                break;
            }else{
                puts("Deseja confirmar seu voto nulo?");
                puts("Digite 1 para sim e 0 para não.");
                scanf("%hhu",&confirm);
                confirm ? votos[3]++ : votos[3];
            }
        break;
        }
    }
    total = votos[0]+votos[1]+votos[2]+votos[3];
    printf("Votos totais: %hhu\n",total);
    printf("Votos em branco: %hhu\n",votos[2]);
    printf("Votos nulos: %hhu\n",votos[3]);
    printf("Paulo: %hhu votos (%0.2f%%)\n",votos[0],((float)votos[0]/(float)total)*100);
    printf("Renata: %hhu votos (%0.2f%%)\n",votos[1],((float)votos[1]/(float)total)*100);
    votos[0]>votos[1] ? puts("Paulo foi eleito.") : puts("Renata foi eleita.");
    return 0;
}
