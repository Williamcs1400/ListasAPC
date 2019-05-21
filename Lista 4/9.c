#include <stdio.h>

int main(){
	int i, num[121];
	float result=0, media=0;
	for(i=0; i<121; i++){
		scanf("%d", &num[i]);
		media+=num[i];
	}
	media=media/121;
	for(i=0; i<121; i++){
		result=num[i]-media;
		printf("%.1f ", result*result);
	}
	return 0;
}