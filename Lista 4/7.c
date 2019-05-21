#include <stdio.h>

int main(){
	int num[135], i, lim_sup, lim_inf;
	for(i=0; i<135; i++){
		scanf("%d", &num[i]);
	}
	scanf("%d %d", &lim_inf, &lim_sup);

	for(i=0; i<135; i++){
		if((num[i]<lim_inf)||(num[i]>lim_sup)){
			printf("%d ", num[i]);
		}
	}
	return 0;
}