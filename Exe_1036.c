#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c, delta, r1, r2;

    scanf("%f%f%f",&a, &b, &c);

    if (a == 0.0) {
        printf("Impossivel calcular\n");
    }
    else {
        delta = pow(b,2) - 4 * a * c;
        if (delta < 0) {
            printf("Impossivel calcular\n");
        }
        else{
            r1 = (-b + sqrt(delta)) / (2 * a);
            r2 = (-b - sqrt(delta)) / (2 * a);
            printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
        }
    }
    return 0;
}