#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k;
	
	for (i=0; i<39; i++) {
		printf("-");
		if(i==38) {
			for (k=0; k<11; k++) {
				printf("\n");
				printf("|");
				for (j=0; j<37; j++) {
					printf(" ");
				}
				printf("|");
			}
			
		}
		
	}
	return 0;
}
