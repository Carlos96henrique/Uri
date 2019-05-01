#include <stdio.h>
int main(){
	double a=1, b=1 , S=0, c;

	for (a=1; a<=39; a=a+2){
		c=a/b;
		S=S+c;
		b=b*2;
		
	}
	printf("%.2lf\n",S);
	return 0;
}
