#include <stdio.h>

int x, y;

void LePonto(){
	int x1=x, y1=y, i;
	scanf("%d %d", &x, &y);
	if(i==1){
		if(x1==x){
			printf("Erro! As cordenadas das abscissas sao iguais\n");
		}
		if(x1!=x){
			printf("%d\n", (y-y1)/(x-x1));
		}
	}
	i++;
}

int main(){
	LePonto();
	LePonto();
	return 0;
}