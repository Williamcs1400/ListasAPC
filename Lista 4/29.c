#include <stdio.h>

int main(){
	int mat[10][10], i, j, soma=0, k=0;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<10; i++){
		k++;
		for(j=0; j<10; j++){
			if(i==0 && j==2){
				soma+=mat[i][j];
			}
			else if(j<k){
				soma+=mat[i][j];
			}	
		}
		
	}
	printf("%d\n", soma-5);
	return 0;

}