#include <stdio.h>
	
int main(){
	int i, j, mat1[5][4], mat2[5][4];
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			scanf("%d", &mat1[i][j]);
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			scanf("%d", &mat2[i][j]);
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			printf("%d ", mat1[i][j]+mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}