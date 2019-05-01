#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c, tri, cir, tra, qua, ret, pi = 3.14159;

    scanf("%lf%lf%lf",&a, &b, &c);

    tri = (a*c)/2;
    cir = pi* pow(c,2);
    tra = ((a+b)*c)/2;
    qua = pow(b,2);
    ret = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri, cir, tra, qua, ret);
    return 0;
}