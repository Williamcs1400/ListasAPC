#include <stdio.h>

int main(){
	int i, num[1000], j;
	for(i=0; i<1000; i++){
		scanf("%d", &num[i]);
		if(num[i]<0){
			break;
		}
	}
	for(j=0; j<i; j++){
		if(num[j]%2==0){
			printf("%d: par\n", num[j]);
		}
		else
			printf("%d: impar\n", num[j]); 
	}
	return 0;
}