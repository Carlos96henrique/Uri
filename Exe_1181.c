#include <stdio.h>
#include <stdlib.h>
#define T 12
int main(){
    float M[T][T], soma=0, media=0;
    int i, j, l;
    char letter;

    scanf("%d",&l);
    scanf(" %c",&letter);

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            scanf("%f",&M[i][j]);
        }
    }
    if (letter == 'S' || letter == 's') {
        for (i = 0; i < T; i++) {
            for (j = 0; j < T; j++) {
                if (i == l) {
                    soma = soma + M[i][j];
                }
            }
        }
        
        printf("%.1f\n", soma);
    }
    else if (letter == 'M' || letter == 'm') {
        for (i = 0; i < T; i++) {
            for (j = 0; j < T; j++) {
                if (i == l) {
                    media = media + M[i][j];
                }
            }
        }
        media = media / T;
        printf("%.1f\n", media);
    }
    
    return 0;
}