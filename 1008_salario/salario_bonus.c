#include <stdio.h>
 
int main() {
 
    char nome[255];
    double salar_fix = 0.00, vendas_efet = 0.00;

    scanf("%s %lf %lf", &nome, &salar_fix, &vendas_efet);

    double calc_bonus = vendas_efet * 0.15;
    double total = salar_fix + calc_bonus;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

