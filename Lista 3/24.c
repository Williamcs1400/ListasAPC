#include <stdio.h>

int main(){
	int n1=2, n2=7, n3=3, qtd_n, i, soma=0;
	scanf("%d", &qtd_n);
	for(i=0; i<qtd_n; i+=3){
		soma+=n1;
		soma+=n2;
		soma+=n3;
		n1*=2;
		n2*=3;
		n3*=4;
	}
	if(qtd_n%3!=0){
		printf("SEM SOMA\n");
	}
	else
		printf("%d\n", soma);
	return 0;
}