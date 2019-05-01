#include <stdio.h>
int main(){
	
	int opcao, quantidade;
	float total=0;
	
	scanf("%d%d", &opcao, &quantidade);
	switch (opcao){
		case 1: 
			total= total + 4.00 * quantidade;
			printf("Total: R$ %.2f\n",total);
			break;
		case 2: 
			total= total + 4.50 * quantidade;
			printf("Total: R$ %.2f\n",total);
			break;
		case 3: 
			total= total + 5.00 * quantidade;
			printf("Total: R$ %.2f\n",total);
			break;
		case 4: 
			total= total + 2.00 * quantidade;
			printf("Total: R$ %.2f\n",total);
			break;
		case 5: 
			total= total + 1.50 * quantidade;
			printf("Total: R$ %.2f\n",total);
			break;
			
	}
	return 0;
}
