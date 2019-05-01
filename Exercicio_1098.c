#include<stdio.h>
int main(){
	float i, j, c1=1,c2;
	for (i=0; i<=2.2; i=i+0.2){
		for(c2=1,j=c1; c2<=3; j++,c2++){
			if (i>0.0 && i<1.0){
				printf("I=%.1f J=%.1f\n",i,j);
			}
			else if (i>1.0 && i < 2.0){
				printf("I=%.1f J=%.1f\n", i,j);
			}
			else {
				printf("I=%.1d J=%.1d\n", (int)i,(int)j);
			}
		}
		c1=c1+0.2;
	}
	return 0;
}
