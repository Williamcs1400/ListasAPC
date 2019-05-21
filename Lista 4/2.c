#include <stdio.h>

int main(){
	int num[300], i, j;
	for(i=0; i<200; i++){	
		scanf("%d", &num[i]);
		if(num[i]<0){
			break;
		}
	}
	for(j=i-1; j>-1; j--){
		printf("%d ", num[j]);
	}
	printf("\n");
	return 0;
}