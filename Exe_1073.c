#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, c=2, r;
    scanf("%d",&n);

    for (i=2; i<=n; i = i + 2) {
        r = pow(i,2);
        printf("%d^%d = %d\n",i, c, r);
    }

    return 0;
}