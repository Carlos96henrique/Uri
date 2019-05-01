#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i=0;
	int a=1, b=1, c=1;
	
	scanf("%d",&n);
	
	do{
		printf("%d %d %d\n",a, b, c);
		b = b + 1;
		c = c + 1;
		printf("%d %d %d\n",a, b, c);
		a++;
		b = a*a;
		c = a*b;
		i++;
	} while (i != n);
	
	return 0;
}
