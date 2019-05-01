#include <stdio.h>
#include <stdlib.h>

int main(){
    char O;
    float M[12][12], soma=0; media=0;
    int i, j, aux=0;

    scanf("%c",&O);

    for (i=0; i<12; i++) 
        for (j=0; j<12; j++){
            scanf("%f",&M[i][j]);
        }

    switch (O){
        case "S": 
            for (i=0; i<12 i++) {
                for (j=0; j<12; j++) {
                    if (j==i+1) {

                    }
                }
            }
        break;
    }


    return 0;
}