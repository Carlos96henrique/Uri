#include <stdio.h>
int main(){
	int cd , nh;
	float vh;
	
	scanf("%d%d",&cd,&nh);
	scanf("%f",&vh);
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",cd, (nh*vh));
	
	return 0;
}
