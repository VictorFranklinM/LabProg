#include <stdio.h>
#include <math.h>
int main(){
    unsigned char num = 3,expo=0;
    for(expo;expo<=7;expo++){
        printf("Potência da base 3 elevado a %hhu: %d\n",expo,(int)pow(num,expo));
    }
    return 0;
}
