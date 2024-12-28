#include <stdio.h>
#include <math.h>

int main() {

    int cateto1, cateto2, hipotenusa;

    for (hipotenusa = 0; hipotenusa <= 500; hipotenusa++) {
        for (cateto1 = 0; cateto1 < hipotenusa; cateto1++) {
            for (cateto2 = cateto1; cateto2 < hipotenusa; cateto2++) {
                if ((cateto1 * cateto1 + cateto2 * cateto2) == (hipotenusa * hipotenusa)) {
                    printf("%d, %d, %d é uma tripla de Pitágoras.\n", hipotenusa, cateto1, cateto2);
                }
            }
        }
    }

    return 0;
}
