#include<stdio.h>
int main(){
	int i, j, c1=7,c2;
	
	for (i=1; i<=9; i=i+2){
		for(c2=1,j=c1; c2<=3; j--,c2++){
			printf("I=%d J=%d\n", i,j);
		}
		c1=c1+2;
	}
	return 0;
}
