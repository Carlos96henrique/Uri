#include <stdio.h>
#include <stdlib.h>

int main() {
	int cod1, cod2, uni1, uni2;
	float pre1, pre2, res;
	
	scanf("%d%d%f",&cod1, &uni1, &pre1);
	scanf("%d%d%f",&cod2, &uni2, &pre2);
	
	res = (uni1 * pre1) + (uni2 * pre2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", res);
	return 0;
}
