#include <stdio.h>
#include <stdlib.h>

int main(){
    float A[4], B[4];
    int i;
    printf("Digite 5 numeros\n");
    for (i=0; i<5; i++) {
        scanf("%f",&A[i]);
        if (A[i] <= 10) {
            B[i] = A[i];
        }
    }
    
    for (i=0; i<5; i++) {
        printf("A[%d] = %f\n",i, B[i]);
    }
    return 0;
}