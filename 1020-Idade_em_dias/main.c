#include <stdio.h>

int main(){

    int n = 0;

    scanf("%d", &n);

    int calc_anos = n / 365;
    int calc_meses = (n % 365) / 30;
    int calc_dias = (n % 365) % 30;

    printf("%d ano(s)\n", calc_anos);
    printf("%d mes(es)\n", calc_meses);
    printf("%d dia(s)\n", calc_dias);

    return 0;
}