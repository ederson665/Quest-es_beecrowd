#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double discr = (b * b) - 4 * a * c;
    
    double R1 = (-b + sqrt(discr)) / (2 * a);
    double R2 = (-b - sqrt(discr)) / (2 * a);
    
    if (a > 0 && b > 0 && c > 0 && discr > 0)
    {
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
    