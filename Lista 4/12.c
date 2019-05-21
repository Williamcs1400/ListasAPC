#include <stdio.h>

int main(){
	int vet1[10], vet2[10], i, j, inter[10], dif[10], cont_i=0, k=0;
	for(i=0; i<10; i++){
		scanf("%d", &vet1[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &vet2[i]);
	}
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(vet1[i]==vet2[j]){
				inter[k]=vet1[i];
				cont_i++;
				k++;
				break;
			}
		}
	}
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(vet1[i]==vet1[j]){
				vet1[j]=-1403;
			}
			if(vet2[i]==vet2[j]){
				vet2[j]=-1403;
			}
		}
	}
	for(i=0; i<10; i++){
		if(vet1[i]!=-1403){
			printf("%d ", vet1[i]);
		}
	}
	for(i=0; i<10; i++){
		for(j=0; j<cont_i; j++){
			if(vet2[i]==inter[j]){
				vet2[i]=-1403;
			}
		}
	}
	for(i=0; i<10; i++){
		if(vet2[i]!=-1403){
			printf("%d ", vet2[i]);
		}
	}
	printf("\n");
	for(i=0; i<10; i++){
		for(j=0; j<cont_i; j++){
			if(vet1[i]==inter[j]){
				vet1[i]=-1403;
			}
		}
	}
	for(i=0; i<10; i++){
		if(vet1[i]!=-1403){
			printf("%d ", vet1[i]);
		}
	}
	printf("\n");
	for(i=0; i<cont_i; i++){
		printf("%d ", inter[i]);
	}
	return 0;
}