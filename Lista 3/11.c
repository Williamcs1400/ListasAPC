#include <stdio.h>

int main(){
	int i, qtd, maior=-10000, menor=10000;
	scanf("%d", &qtd);
	int vet[qtd];
	for(i=0; i<qtd; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<qtd; i++){
		if(vet[i]>maior){
			maior=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];
		}
	}
	printf("Menor: %d\n", menor);
	printf("Maior: %d\n", maior);
	return 0;
}