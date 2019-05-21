#include <stdio.h>

int main(){
	int i=0, total=0, volta, volta2, menor=10000, maior=-10000, Imaior=0, Imenor=0;
	while(1){
		scanf("%d", &volta);
		if(volta==0){
			break;
		}
		i++;
		if(volta<0){
			scanf("%d", &volta2);
			volta*=-1;
			volta+=volta2;
		}
		if(volta<menor){
			menor=volta;
			Imenor=i;
		}
		if(volta>maior){
			maior=volta;
			Imaior=i;
		}
		total+=volta;
	}
	printf("Melhor volta: %d - %d seg\n", Imenor, menor);
	printf("Pior volta: %d - %d seg\n", Imaior, maior);
	printf("Tempo total: %d seg\n", total);
	return 0;
}