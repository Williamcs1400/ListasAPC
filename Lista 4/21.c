#include <stdio.h>

int main(){
	int i, j, mat[4][5], maior=-10000, i_maior=0, j_maior=0;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(mat[i][j]>maior){
				maior=mat[i][j];
				i_maior=i;
				j_maior=j;
			}
		}
	}
	printf("%d %d %d\n", maior, i_maior, j_maior);
	return 0;
}