#include <stdio.h>
#include <math.h>
int main(){
    float distancia;
    int x1,x2,y1,y2;
    printf("Escreva as coordenadas x dos pontos x e y: ");
    scanf("%d%d",&x1,&x2);
    printf("Escreva as coordenadas y dos pontos x e y: ");
    scanf("%d%d",&y1,&y2);
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distância entre (%d,%d) e (%d,%d) = %f\n",x1,y1,x2,y2,distancia);
    return 0;
}
