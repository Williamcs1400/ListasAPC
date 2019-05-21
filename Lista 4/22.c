#include <stdio.h>
	
int main(){
	int i, j, soma=0, mat[7][7];
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			if(j==i){
				soma+=mat[i][j];
			}
		}
	}
	printf("%d\n", soma);
	return 0;
}