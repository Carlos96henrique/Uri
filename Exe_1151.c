#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int fib=2, f1=3, f2=0, i, n;

    scanf("%d",&n);

    for (i=0; i<n; i++) {
        fib = (f1-1) + (f2-2);
        printf("%d ",fib);
        f1++;
        f2++;
    }
    return 0;
}