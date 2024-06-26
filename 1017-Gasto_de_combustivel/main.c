#include <stdio.h>
#include <stdlib.h>

int main(){

    int hrs = 0, kmH = 0;

    scanf("%d", &hrs);
    scanf("%d", &kmH);

    float dist_perc = hrs * kmH;

    float gast_combus = dist_perc / 12;

    printf("%.3f\n", gast_combus);

    return 0;
} 