#include <stdio.h>
#define T 5
main (){
	int par[T], impar[T], i, j=0, n;
	for(i=0; i<15; i++){
		scanf("%d",&n);
		if (n%2==0){
			do {
				par[i]=n;
				j++;
			}while(j<T);
		}
		else{
			do {
				par[i]=n;
				j++;
			}while(j<T);
		}
	}
	return 0;
}
