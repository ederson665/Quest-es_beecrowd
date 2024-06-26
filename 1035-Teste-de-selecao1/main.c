#include <stdio.h>

int main(){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int somaCD = c + d;
    int somaAB = a + b;

    if (b > c && d > a && somaCD > somaAB && a % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}