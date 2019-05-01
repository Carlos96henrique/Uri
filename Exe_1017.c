#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, k;
    float l;

    scanf("%d%d",&h, &k);

    l = ((float)h*k)/12;

    printf("%.3f\n", l);
    
    return 0;
}