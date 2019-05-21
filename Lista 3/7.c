#include <stdio.h>

int main(){
	int temp_f1, temp_f2, i;
	float temp_c=0;
	scanf("%d %d", &temp_f1, &temp_f2);
	for(i=temp_f1; i<=temp_f2; i++){
		temp_c=(i-32)*(0.555555556);
		printf("%d F : %.1f C\n", i, temp_c);
	}
	return 0;
}