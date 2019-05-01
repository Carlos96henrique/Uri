#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, cem, cin, vin, dez, cinco, dois, um;
	
	scanf("%d",&n);
	
	cem = n / 100;
	cin = (n%100) / 50;
	vin = ((n%100) % 50) / 20;
	dez = (((n%100) % 50) % 20) / 10;
	cinco = ((((n%100) % 50) % 20) %10) / 5;
	dois = (((((n%100) % 50) % 20) % 10) % 5) / 2;
	um = ((((((n%100) % 50) % 20) % 10) % 5) % 2) / 1;
	
	printf("%d\n",n);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cin);
	printf("%d nota(s) de R$ 20,00\n",vin);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);
	
	return 0;
}
