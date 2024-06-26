#include <stdio.h>

int main(){

    float n1, n2, n3, n4;
    float nt_exm;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    scanf("%f", &nt_exm);

    float media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / 10;
    float med_final = (nt_exm + media) / 2;
    
    printf("Media: %.1f\n", media);
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9 || med_final >= 5.0) {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", nt_exm);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", med_final);
    }
    else if (media >= 5.0 || media <= 6.9 && med_final <= 4.9) {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", nt_exm);
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", med_final);
    }    

    return 0;
}