#include <stdio.h>

int main(){
	int i=1, total=0, qtd, volta, volta2, maior=-10000, menor=10000, Imenor=0, Imaior=0;
	scanf("%d", &qtd);
	while(i<=qtd){
		scanf("%d", &volta);
		if(volta<0){
			scanf("%d", &volta2);
			if(volta==-1){
				volta2+=10;
			}
			else if(volta==-2){
				volta2+=25;
			}
			else{
				volta2+=40;
			}
			volta=volta2;
		}
		if(volta<menor){
			menor=volta;
			Imenor=i;
		}
		if(volta>maior){
			maior=volta;
			Imaior=i;
		}
		i++;
		total+=volta;	
	}
	printf("Melhor volta: %d - %d seg\n", Imenor, menor);
	printf("Pior volta: %d - %d seg\n", Imaior, maior);
	printf("Tempo total: %d seg\n", total);
	return 0;
}