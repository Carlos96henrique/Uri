#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, n, k, l;
	int **mat;
	while(scanf("%d",&n)!=EOF){
		mat = (int **) malloc (n*sizeof(int));
		for (i=0; i<n; i++){
			mat[i] = (int*) malloc (n*sizeof(int));
			for (j=0; j<n; j++){
				mat[i][j]=0;
				if (i==j){
					mat[i][j]=2;
				}
				if (i+j==n-1){
					mat[i][j]=3;
				}
				for ()
		}
		for (i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%d",mat[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}
