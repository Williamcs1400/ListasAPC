#include <stdio.h>

int main(){
	int num[87], i, j, limite;
	for(i=0; i<87; i++){	
		scanf("%d", &num[i]);
		if((i==86)||(num[i]==0)){
			scanf("%d", &limite);
			break;
		}
	}
	for(j=0; j<i; j++){
		if(num[j]>limite){
			printf("%d ", num[j]);
		}
	}
	printf("\n");
	return 0;
}