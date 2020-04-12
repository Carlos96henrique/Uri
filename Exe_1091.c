#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, x, y, k, i, fim;

    scanf("%d",&k);
    do {
        scanf("%d%d",&n ,&m);
        for (i=0; i<k; i++){
            scanf("%d%d",&x,&y);
            if (x==n||y==m){
                printf("divisa\n");
            }
            else if (x>n){
                if (y>m){
                    printf("NE\n");
                }
                else{
                    printf("SE\n");
                }
            }
            else {
                if (y>m){
                    printf("NO\n");
                }
                else {
                    printf("SO\n");
                }
            }
        }
        scanf("%d",&k);
    } while (k != 0);
    return 0;
}