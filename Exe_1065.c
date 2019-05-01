#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[5],i, contp=0;

    for (i = 0; i < 5; i++) {
        scanf("%d",&v[i]);
        if (v[i] % 2 == 0) {
            contp++;
        }
    }
    printf("%d valores pares\n", contp);

    return 0;
}