#include <stdio.h>
int main(){
	int n, x, y, i=0, soma1=0,  soma2=0, impares, j;
	
	scanf("%d",&n);
	while (i<n){
		scanf("%d%d",&x,&y);
		if (x>y){
			for (j=y+1; j<x; j++){
				if (j%2!=0){
					soma1 = soma1 + j;
				}
			}
		}
		else if(y>x){
			for (j=x+1; j<y; j++){
				if (j%2!=0){
					soma2 = soma2 + j;
				} 
			}
		}
		if (soma1 > soma2){
			impares = soma1 - soma2;
			printf("%d\n",impares);
			soma1=0;
			soma2=0;
		}
		else {
			impares = soma2 -  soma1;
			printf("%d\n",impares);
			soma1=0;
			soma2=0;
		}
		i++;
	}
	return 0;
}
