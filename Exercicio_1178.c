#include <stdio.h>

main (){
	double x, N[100];
	int  i=0;
	scanf("%lf", &x);
	for(i=0; i<100; i++){
		printf("N[%d] = %.4lf\n", i,x);
		x/=2;
	}
	return 0;
}
