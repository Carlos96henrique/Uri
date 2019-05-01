#include <stdio.h>
#include <stdlib.h>
int main(){
	int vetp[5], vetip[5], le[15], b, c, d, e, i;
	b=0;
	c=0;
	for (i=0; i<15; i++){
		scanf("%d",&le[i]);
	}
	for (i=0; i<15; i++){
		if (le[i]%2==0){
			vetp[b]=le[i];
			b++;
			if (b==5){
				for (d=0; d<b; d++){
					printf("par[%d] = %d\n",d , vetp[d]);
				}
				b=0;
			}
		}
		else{
			vetip[c]=le[i];
			c++;
			if (c==5){
				for (e=0; e<c; e++){
					printf("impar[%d] = %d\n",e , vetip[e]);
				}
				c=0;
			}
		}
	}
	for (i=0; i<c; i++){
		printf("impar[%d] = %d\n",i ,vetip[i]);
	}
	for (i=0; i<b; i++){
		printf("par[%d] = %d\n",i , vetp[i]);
	}
	return 0;
}
