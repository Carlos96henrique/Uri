#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4, exame, media1, media2;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);

    media1 = (n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);


    printf("Media: %.1f",media1);
    if (media1 < 5.0) {
        printf("\nAluno reprovado\n");
    }
    else if (media1 < 6.9 && media1 >= 5.0) {
        printf("\nAluno em exeme.\n");
        scanf("%f",&exame);
        printf("Nota do exame: %.1f\n", exame);
        media2 = (exame + media1)/2;
        if (media2 < 5.0) {
            printf("\nAluno reprovado.\n");
            printf("Media final: %.1f\n",media2);
        }
        else {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media2);
        }
    }
    else {
        printf("\nAluno aprovado.\n");
    }
    return 0;
}