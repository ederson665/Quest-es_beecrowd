#include <stdio.h>

int main(){
    float a = 0.0, b = 0.0, c = 0.0;
    scanf("%f %f %f", &a, &b, &c);
    double pi = 3.14159;

    double tri = (a * c) / 2;
    float circ = pi * c * c;
    float trap = ((a + b) * c) / 2;
    double quad = b * b;
    float ret = a * b;

    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", circ);
    printf("TRAPEZIO: %.3f\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3f\n", ret);

    return 0;
}