#include <stdio.h>

int main(){
	int num[200], i;
	for(i=0; i<200; i++){	
		scanf("%d", &num[i]);
	}
	for(i=199; i>-1; i--){
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}