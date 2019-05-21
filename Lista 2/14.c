#include <stdio.h>

int main(){
	int entrada, saida, hora1=0, hora2=0, min1=0, min2=0, tempo=0, aux=0;
	scanf("%d %d", &entrada, &saida);

	/*Calcular hora*/
	hora1=entrada/100;
	min1=entrada-(hora1*100);
	hora2=saida/100;
	min2=saida-(hora2*100);

	/*Entrada*/
	printf("Entrada\n");
	if(hora1<10){
		printf("0%d:", hora1);
	}
	else
		printf("%d:", hora1);
	
	if(min1<10){
		printf("0%d\n",min1);
	}
	else
		printf("%d\n", min1);

	/*Saida*/
	printf("Saida\n");
	if(hora2<10){
		printf("0%d:", hora2);
	}
	else
		printf("%d:", hora2);
	if(min2<10){
		printf("0%d\n",min2);
	}
	else
		printf("%d\n", min2);

	/*Duração*/
	printf("Duracao(min)\n");
	aux=(hora2-hora1)*60;
	tempo=(min2-min1)+aux;
	printf("%d\n",tempo);

	/*Preço*/
	printf("Preco(centavos)\n");
	if(tempo<=15){
		printf("0\n");
	}
	else if(tempo<=60){
		printf("%d\n", 30*tempo);
	}
	else if(tempo<=120){
		printf("%d\n", (30*60)+(20*(tempo-60)));
	}
	else
		printf("%d\n", (30*60)+(20*60)+(10*(tempo-(120))));

	return 0;
}