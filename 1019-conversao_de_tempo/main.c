#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;

    scanf("%d", &n);
    int calc_hr = (n / 60) / 60;
    int calc_min = (n / 60) % 60;
    int calc_seg = n % 60;

    printf("%d:%d:%d\n", calc_hr, calc_min, calc_seg);

    return 0;
}