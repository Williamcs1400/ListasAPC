#include <stdio.h>

int main(){
	int qtd, i, total=0, larg, comp;
	scanf("%d", &qtd);
	for(i=0; i<qtd; i++){
		scanf("%d %d", &larg, &comp);
		total+=larg*comp;
	}
	printf("%d\n", total);
	return 0;
}