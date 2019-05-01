#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double r, v, pi = 3.14159;

    scanf("%lf",&r);
    v = (4.0/3) * pi * (pow(r,3));
    printf("VOLUME = %.3lf\n",v);
    return 0;
}