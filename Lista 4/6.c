#include <stdio.h>

int main(){
	int num[53], i, j, limite, cont=0;
	float soma=0, media=0;
	for(i=0; i<53; i++){	
		scanf("%d", &num[i]);
	}
	scanf("%d", &limite);
	for(j=0; j<i; j++){
		if(num[j]<=limite){
			soma+=num[j];
			cont++;
		}
	}
	media=soma/cont;
	printf("%.1f\n", media);
	return 0;
}