#include <stdio.h>

int main(){
	int idade;
	scanf("%d", &idade);
	if(idade>65){
		printf("R$ 400,00\n");
	}
	else if(idade>60){
		printf("R$ 250,00\n");
	}
	else if(idade>46){
		printf("R$ 150,00\n");
	}
	else if(idade>30){
		printf("R$ 120,00\n");
	}
	else if(idade>10){
		printf("R$ 60,00\n");
	}
	else
		printf("R$ 30,00\n");
	return 0;
}