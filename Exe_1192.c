#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    int n, i;
    int num1, num2, result;
    char letter;

    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&num1);
        scanf(" %c",&letter);
        scanf("%d",&num2);
        if (num1 == num2){
            result = num1 * num2;
            printf("%d\n",result);
        }
        else {
            if (islower(letter)){
                result = num1 + num2;
                printf("%d\n", result);
            }
            else {
                result = num2 - num1;
                printf("%d\n", result);
            }
        }
    }
    return;
}