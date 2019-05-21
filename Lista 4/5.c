#include <stdio.h>

int main(){
	int num[106], i, j, limite, soma=0;;
	for(i=0; i<106; i++){	
		scanf("%d", &num[i]);
		if((i==105)||(num[i]==0)){
			scanf("%d", &limite);
			break;
		}
	}
	for(j=0; j<i; j++){
		if(num[j]<=limite){
			soma+=num[j];
		}
	}
	printf("%d\n", soma);
	return 0;
}