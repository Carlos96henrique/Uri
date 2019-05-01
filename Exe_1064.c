#include <stdio.h>
#include <stdlib.h>

int main() {
	float n, m=0;
	int i=0, c=0;
	do{
		scanf("%f", &n);
		if (n>0) {
			c++;
			m = m + n;
		}
		
		i++;
	} while (i<6);
	
	m = m/c;
	printf("%d valores positivos\n", c);
	printf("%.1f\n",m);
	
	
	return 0;	
}
