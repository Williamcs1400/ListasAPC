#include <stdio.h>

int main(){
	int i, j, mat[9][9], aux1[9], aux2[9], k=9;
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(i+j==8){
				aux2[i]=mat[i][j];
			}
			if(i==j){
				aux1[i]=mat[i][j];
			}
		}
	}
	for(i=0; i<9; i++){
		k--;
		for(j=0; j<9; j++){
			if(i+j==8){
				mat[i][j]=aux1[k];
			}
			if(i==j){
				mat[i][j]=aux2[k];
			}
		}
	}
	printf("\n");
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}