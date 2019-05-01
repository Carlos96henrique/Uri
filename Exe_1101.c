#include <stdio.h>
#include <stdlib.h>

int main() {
	int M, N, i, soma = 0;
	
	
	scanf("%d %d",&M, &N);
	while (M>0 && N>0) {
		if (M>N) {
			for (i=N; i<=M; i++) {
				soma = soma + i;
				printf ("%d ",i);
			}
			printf("Sum=%d\n", soma);
		}
		else {
			for (i=M; i<=N; i++) {
				soma = soma + i;
				printf ("%d ",i);
				
			}
			printf("Sum=%d\n",soma);
		}
		soma = 0;
		scanf("%d %d",&M, &N);
	}
	
	return 0;
}
