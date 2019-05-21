#include <stdio.h>

int main(){
	int i;
	double resist, maior=-1, soma=0;
	for(i=0; i<6; i++){
		scanf("%lf", &resist);
		soma+=resist;
		if(resist>maior){
			maior=resist;
		}
	}
	printf("%.4lf %.4lf %.4lf\n", soma, 1/soma, maior-(soma/6));
	return 0;
}