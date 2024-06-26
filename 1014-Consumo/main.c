#include <stdio.h>

int main(){

    int x = 0;
    float y = 0.0;

    scanf("%d %f", &x, &y);

    double consu = x / y;

    printf("%.3lf km/l\n", consu);


    return 0;
}