#include <stdio.h>
int main(){
	int n, x, y, i;
	float r;
	scanf("%d",&n);
	do{
		scanf("%d%d",&x,&y);
		if (y==0){
			printf("divisao impossivel\n");
		}
		else {
			r=(float)x/(float)y;
			printf("%.1f\n",(float)r);
		}
		i++;
	}while(i!=n);
	return 0;
}
