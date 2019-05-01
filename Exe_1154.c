#include <stdio.h>
#include <stdlib.h>

int main(){
    int idades, contador=0;
    float media, soma=0;

    scanf("%d",&idades);
    while (idades >= 0) {
        soma = soma + idades;
        contador++;
        scanf("%d",&idades);
    }

    media = soma / contador;

    printf("%.2f\n",media);
    return 0;
}