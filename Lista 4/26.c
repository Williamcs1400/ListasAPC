#include <stdio.h>

int main(){
	int mat[10][5], i, j, soma=0, soma_linha=0, i_aux=0;
	for(i=0; i<10; i++){
		for(j=0; j<5; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<10; i++){
		soma_linha=0;
		for(j=0; j<5; j++){
			soma_linha+=mat[i][j];
		}
		if(soma_linha>soma){
			soma=soma_linha;
			i_aux=i;
		}
	}
	printf("%d\n", i_aux);
	return 0;
}