#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(){
	int result=0, x;
	scanf("%d", &x);
	result=sinal(x);

	if(result==1){
		printf("Numero Positivo\n");
	}
	else if(result==-1){
		printf("Numero Negativo\n");
	}
	else 
		printf("Zero\n");

	return 0;
}