#include <stdio.h>

int main(){
	int mat[15][5], i, j, menor[15], menor1=10000;
	for(i=0; i<15; i++){
		for(j=0; j<5; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<15; i++){
		menor1=10000;
		for(j=0; j<5; j++){
			if(mat[i][j]<menor1){
				menor1=mat[i][j];
			}
		}
		menor[i]=menor1;
	}
	for(i=0; i<15; i++){
		for(j=0; j<5; j++){
			printf("%.02d ", mat[i][j]-menor[i]);
		}
		printf("\n");
	}
	return 0;
}