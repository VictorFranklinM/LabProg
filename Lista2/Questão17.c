#include <stdio.h>
#define MAX 100
#define RANGE 10
void convert(float *c, float *f){
    *c += RANGE;
    *f = *c*1.8 + 32;
} 
int main(){
    float celsius, fahrenheit;
    float *pc = &celsius;
    float *pf = &fahrenheit;
    for(float i = 0; i<MAX; i += RANGE){
        convert(pc,pf);
        printf("%0.1f graus Celsius = %0.1f graus Fahrenheit\n",celsius,fahrenheit);
    }
    return 0;
}
