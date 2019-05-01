#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, i=1, j=0;
	
	scanf("%d%d",&x, &y);
	
	while (i <= y) {
		while(j<x) {
			printf("%d ",i);
			i++;
			j++;
			if(i == y) {
				j = x;
			}
		}
		j = 0;
		printf("\n");
	}
	
	return 0;
}
