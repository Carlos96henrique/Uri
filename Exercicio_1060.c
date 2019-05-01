#include<stdio.h>
int main(){
	int i, positivos;
	float num;
	i=0;
	positivos=0;
	do{
		scanf("%f", &num);
		if (num > 0 ){
			positivos = positivos +1;
		}
		i++;
	}while (i < 6);
	printf("%d valores positivos",positivos);
	return 0;
}
