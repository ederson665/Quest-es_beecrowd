#include <stdio.h>

int main () {

    int pc1 = 0, numPc1 = 0, pc2 = 0, numPc2 = 0;
    float vlr1 = 0.00, vlr2 = 0.00;

    scanf("%i %i %f", &pc1, &numPc1, &vlr1);
    scanf("%i %i %f", &pc2, &numPc2, &vlr2);

    float vlrpag = numPc1 * vlr1;
    float vlrpag2 = numPc2 * vlr2;
    float vlrtotal = vlrpag + vlrpag2;

    printf("VALOR A PAGAR: R$ %.2f", vlrtotal);

    return 0;
}
