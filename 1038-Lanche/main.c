#include <stdio.h>

int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    float c1 = 4.00, c2 = 4.50, c3 = 5.00, c4 = 2.00, c5 = 1.50;

    if (n1 == 1)
    {
        float calc1 = c1 * n2;
        printf("Total: R$ %.2f\n", calc1);
    }
    else
        if (n1 == 2)
        {
            float calc2 = c2 * n2;
            printf("Total: R$ %.2f\n", calc2);
        }
        else
            if (n1 == 3)
            {
                float calc3 = c3 * n2;
                printf("Total: R$ %.2f\n", calc3);
            }
            else
                if (n1 == 4)
                {
                    float calc4 = c4 * n2;
                    printf("Total: R$ %.2f\n", calc4);
                }
                else
                    if (n1 == 5)
                    {
                        float calc5 = c5 * n2;
                        printf("Total: R$ %.2f\n", calc5);
                    }
                    
    

    return 0;
}