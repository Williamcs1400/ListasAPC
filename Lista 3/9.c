#include <stdio.h>

int main(){
	int qtd;
	double preco, soma=0, aux=0;
	while(1){
		scanf("%d", &qtd);
		do{
			scanf("%lf", &preco);
		}while(preco<0);
		
		if((qtd<=0)||(preco==0)){
			printf("%.2lf\n", soma);
			return 0;
		}
		else{
			soma+=preco*qtd;
		}
	}
	return 0;
}