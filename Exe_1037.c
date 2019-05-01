#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;

    scanf("%f",&valor);
   if (valor >= 0 && valor <= 25.0) {
       printf("Intervalo [0,25]\n");
   }
   else if (valor >= 25.01 && valor <= 50.00) {
       printf("Intervalo (25,50]\n");
   }
   else if (valor >=50.01 && valor <= 75.00) {
       printf("Intervalo (50,75]\n");
   }
   else if (valor >=75.01 && valor <= 100.00) {
       printf("Intervalo (75,100]\n");
   }
   else {
       printf("Fora de intervalo\n");
   }
    return 0;
}