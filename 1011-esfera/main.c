#include <stdio.h>

int main(){
    double R = 0.0;
    double pi = 3.14159;

    scanf("%lf", &R);
    double R3 = R * R * R;

    double vol = (4.0/3) * pi * R3;

    printf("VOLUME = %.3lf\n", vol);

    return 0;
}