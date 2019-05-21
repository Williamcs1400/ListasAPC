#include <stdio.h>

int main(){
	int mat[9][9], i, j, cont=0;
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<9; i++){
		for(j=0; j<7; j++){
			if(mat[i][j]==mat[j][i]){
				cont++;
			}
		}
	}
	if(cont==63){
		printf("S\n");
	}
	else
		printf("N\n");
	return 0;
}