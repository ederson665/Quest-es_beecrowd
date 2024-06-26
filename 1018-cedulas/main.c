#include<stdio.h>

int main() {
    int n, valorCedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeCedulas[7];

    for (int i = 0; i < 7; i++) {
        quantidadeCedulas[i] = 0;
    }
    
    scanf("%d", &n);
    printf("%d\n", n);

    int i = 0;
    while (n != 0) {
        if (n >= valorCedulas[i]) {
            quantidadeCedulas[i] = n / valorCedulas[i];
            n = n % valorCedulas[i];
        }
        else {
            i++;
        }
    }

    for (int j = 0; j < 7; j++) {
        printf("%d nota(s) de R$ %d,00\n", quantidadeCedulas[j], valorCedulas[j]);
    }

    return 0;
}
