#include <stdio.h>

int main(){
	int i, num[28];
	float result=0, media=0;
	for(i=0; i<28; i++){
		scanf("%d", &num[i]);
		media+=num[i];
	}
	media=media/28;
	for(i=0; i<28; i++){
		result+=num[i]-media;
	}
	
	printf("%f", result*result);
	return 0;
}