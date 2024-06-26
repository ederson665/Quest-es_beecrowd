#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float n;
    float valorCedulas[] = { 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01 };
    float quantidadeCedulas[12] = {0};

    // printf("%f\n", valorCedulas[0]);

    scanf("%f", &n);

    int i = 0;
    while (n != 0) {
        if (n >= valorCedulas[i]) {
            quantidadeCedulas[i] = n / valorCedulas[i];
            n = fmod(n, valorCedulas[i]);
        }
        else{
            i++;
        }
    }
    
    printf("NOTAS:\n");
    for (int j = 0; j < 6; j++)
    {
        // printf("%f i: %i\n", valorCedulas[j], j);
        printf("%.0f nota(s) de R$ %.2f\n", floor(quantidadeCedulas[j]), valorCedulas[j]);
    }
    
    printf("MOEDAS:\n");
    for (int j = 6; j < 12; j++)
    {
        printf("%.0f moeda(s) de R$ %.2f\n", floor(quantidadeCedulas[j]), valorCedulas[j]);
    }
    
    return 0;
}
