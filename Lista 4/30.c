#include <stdio.h>

int main(){
	int mat[7][7], q1=0, q2=0, q3=0, q4=0, i, j, soma_cruz=0, soma=0;
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			if(i==3){
				soma_cruz+=mat[i][j];
			}
			if(j==3){
				soma_cruz+=mat[i][j];
			}
		}
	}
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			if((i<3)&&(j<3)){
				q1+=mat[i][j];
			}
			else if((i<3)&&(j>3)){
				q2+=mat[i][j];
			}
			else if((i>3)&&(j<3)){
				q3+=mat[i][j];
			}
			else if((i>3)&&(j>3)){
				q4+=mat[i][j];
			}
		}
	}
	soma_cruz-=mat[3][3];
	if(q1>soma_cruz){
		soma+=q1;
	}
	if(q2>soma_cruz){
		soma+=q2;
	}
	if(q3>soma_cruz){
		soma+=q3;
	}
	if(q4>soma_cruz){
		soma+=q4;
	}
	printf("%d\n", soma);
	return 0;
}