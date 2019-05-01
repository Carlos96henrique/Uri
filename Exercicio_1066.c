#include<stdio.h>
int main (){
	int num, cont, par, impar, negativo, positivo;
	positivo = 0;
	negativo = 0;
	impar = 0;
	par = 0;
	cont=0;
	
	do {
		scanf("%d",&num);
		if (num %2 ==0){
			par = par +1;
		}
		else {
			impar = impar + 1;
		}
		if (num < 0){
			negativo = negativo +1;
		}
		else if (num > 0){
			positivo = positivo + 1;
		}
		cont++;
	}while (cont < 5);
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par, impar, positivo, negativo);
	return 0;
}
