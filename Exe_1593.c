#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i, j, cont=0;
    scanf("%d",&t);
    for (j=0; j<t; j++) {
        scanf("%d",&i);
        while (i!=0) {
            if (i>=512){
                i = i - 512;
                cont++;
            }
            else if (i >= 256){
                i = i - 256;
                cont++;
            }
            else if (i>=128) {
                i = i - 128;
                cont++;
            }
            else if (i >= 64){
                i = i - 64;
                cont++;
            }
            else if (i >= 32){
                i = i - 32;
                cont++;
            }
            else if (i >= 16){
                i = i - 16;
                cont++;
            }
            else if (i >= 8){
                i = i - 8;
                cont++;
            }
            else if (i >= 4) {
                i = i - 4;
                cont++;
            }
            else if (i >= 2){
                i = i - 2;
                cont++;
            }
            else{
                i = i - 1;
                cont++;
            }
        }
        printf("%d\n", cont);
        cont = 0;
    }
    return 0;
}