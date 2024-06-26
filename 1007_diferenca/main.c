    #include <stdio.h>
 
    int main() {

    int func = 0, hrs = 0;
    float vlrhora = 0.00;
    scanf("%i %i %f", &func, &hrs, &vlrhora );

    int salario = hrs * vlrhora; 
    
    printf("NUMBER = %i\n", func);
    printf("SALARY = U$ %.2i\n", salario);

 
    return 0;
}
