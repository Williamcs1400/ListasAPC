#include <stdio.h>

int main(){
	int mat[8][8], SD=0, SL=0, maior=-1000, i_maior=0, i, j;
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(i==j){
				SD+=mat[i][j];
			}
		}
	}
	for(i=0; i<8; i++){
		SL=0;
		for(j=0; j<8; j++){
			SL+=mat[i][j];
		}
		if(SL%SD>maior){
			maior=SL%SD;
			i_maior=i;
		}
	}
	printf("%d\n", i_maior);
	return 0;
}