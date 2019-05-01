#include <stdio.h>
int main(){
	int n, i, n2;
	
	do {
		scanf("%d",&n);
	}while (n<2 || n>1000);
	for (i=1; i<11; i++){
		n2=i*n;
		printf("%d x %d = %d\n", i, n, n2 );
	}
	return 0;
}
