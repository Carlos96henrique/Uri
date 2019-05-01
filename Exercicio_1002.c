#include<stdio.h>
#include<math.h>
int main(){
	double raio, a=0;
	
	scanf("%lf",&raio);
	a = 3.14159*(raio * raio);
	
	printf("A=%.4lf\n",a);
	return 0;
}
