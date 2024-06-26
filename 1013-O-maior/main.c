#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 0, b = 0, c =0;

    scanf("%d %d %d", &a, &b, &c);

    int MaiorAB = (a + b + abs(a - b)) / 2;    

    if (c > MaiorAB)
    {
        printf("%d eh o maior\n", c);
    }
    else
        if (c < MaiorAB)
        {
            printf("%d eh o maior\n", MaiorAB);
        }
        

    return 0;
}