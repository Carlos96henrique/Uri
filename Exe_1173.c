#include <stdio.h>
int main(){
	int V, N[10], i;
	
	scanf("%d",&V);
	N[0]=V;
	
	for(i=1; i<11; i++){
		N[i]=V*2;
		V=N[i];
	}
	for (i=0; i<10; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	return 0;
}
