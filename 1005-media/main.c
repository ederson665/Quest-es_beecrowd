#include <stdio.h>
 
int main() {
    float a = 0.0, b =0.0, c = 0.0;
    scanf("%f %f %f", &a, &b, &c);
    float med = (a * 2.0 + b * 3.0 + c * 5.0) / 10;
    printf("MEDIA = %.1f\n", med);
 
    return 0;
}