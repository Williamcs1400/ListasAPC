#include <stdio.h>

int main(){
	int i, num, maior=-10000, menor=10000;
	for(i=0; i<20; i++){
		scanf("%d", &num);
		if(num<menor){
			menor=num;
		}
		if(num>maior){
			maior=num;
		}
	}
	printf("Menor: %d\n", menor);
	printf("Maior: %d\n", maior);
	return 0;
}