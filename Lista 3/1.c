#include <stdio.h>

int main(){
	int i;
	double peso[25], total=0;
	for(i=0; i<25; i++){
		scanf("%lf", &peso[i]);
	}
	for(i=0; i<25; i++){
		total+=peso[i];
	}
	printf("%.1lf\n", total);
	return 0;
}