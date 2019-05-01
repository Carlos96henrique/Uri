#include<stdio.h>
int main(){
	float x, y;
	scanf("%.1d%.1d", &x, &y);
	if (x==0 && y==0){
		printf("Origem");
	}
	else if(x==0 && y!=0){
		printf("Eixo X");
	}
	else if(x!=0 && y==0){
		printf("Eixo Y");
	}
	else if (x>0){
		if (y>0){
			printf("Q1");
		}
		else{
			printf("Q4");
		}
	}
	else {
		if (y>0){
			printf("Q2");
		}
		else{
			printf("Q3");
		}
	}
	return 0;	
}
