#include<stdio.h>
int main(){
	
	int n, cont=1, s1=1, s2=1;
	scanf("%d", &n);
	
	do {
		s1=cont*cont;
		s2=s1*cont;
		printf("%d %d %d\n", cont, s1, s2);
		cont++;
	}while(cont<=n);
	return 0;
}
