#include <stdio.h>
#include <stdlib.h>

int main(){
	int  m, n, i,j;
	int mat[100][100];
	
	while (scanf("%d %d",&m,&n)!=EOF){
		for (i=0; i<m; i++){
			for(j=0; j<n; j++){
				scanf("%d",&mat[i][j]);
			}
		}
		for (i=0; i<m; i++){
			for(j=0; j<n; j++){
				
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
