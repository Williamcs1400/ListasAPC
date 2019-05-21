#include <stdio.h>

int main(){
	int num[150], i, j, limite;
	for(i=0; i<150; i++){	
		scanf("%d", &num[i]);
	}
	scanf("%d", &limite);
	for(j=0; j<150; j++){
		if(num[j]<limite){
			printf("%d ", num[j]);
		}
	}
	printf("\n");
	return 0;
}