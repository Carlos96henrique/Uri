#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int C, N, i;
	char nome[50];
	char th[] = "Thor";
	
	scanf("%d",&C);
	for(i=0; i<C; i++){
		scanf("%s",&nome);
		scanf("%d",&N);
		if (strcmp(nome, th)==0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
	
	return 0;
}
