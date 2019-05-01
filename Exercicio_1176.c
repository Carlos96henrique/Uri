#include <stdio.h>

main (){
	long long int fibo[61];
	int n, t, i;
		
	fibo[0]=0;
	fibo[1]=1;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d",&n);
		if (n==fibo[0]){
			printf("Fib(%d) = %lld\n", n, fibo[0]);
		}
		else if (n==fibo[1]){
			printf("Fib(%d) = %lld\n", n, fibo[1]);
		}
		else{
			fibo[i]=n-1;
			printf("Fib(%d) = %lld\n", n, fibo[i]);
		}
 }
	return 0;
}
