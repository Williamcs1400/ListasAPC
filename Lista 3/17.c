#include <stdio.h>

int main(){
	int i, tam, velo, maior=0;
	scanf("%d", &tam);
	for(i=1; i<=tam; i++){
		scanf("%d", &velo);
		if(velo>maior){
			maior=velo;
		}
	}
	if(maior>=20){
		printf("3\n");
	}
	else if(maior>=10){
		printf("2\n");
	}
	else
		printf("1\n");
	return 0;
}