#include<stdio.h>
int main(){
	int X , Y;
	
	scanf("%d%d", &X, &Y);
	
	while (X != 0 && Y != 0) {
		if (X > 0 && Y > 0 ){
			printf("primeiro\n");
			scanf("%d%d", &X, &Y);
		}
		else if (X<0 && Y <0) {
			printf("terceiro\n");
			scanf("%d%d", &X, &Y);	
		}
		else if (X>0 && Y <0) {
			printf("quarto\n");
			scanf("%d%d", &X, &Y);	
		}
		else {
			printf("segundo\n");
			scanf("%d%d", &X, &Y);	
		}
	}
	return 0;
}
