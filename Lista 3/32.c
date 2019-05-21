#include <stdio.h>

int main(){
	int i, qtd, PA, PB, cont=0, j;
	float CA, CB;
	double distan;
	scanf("%d", &qtd);
	for(i=0; i<qtd; i++){
		scanf("%d %d %f %f %lf", &PA, &PB, &CA, &CB, &distan);
		cont=0;
		for(j=0; j<101; j++){
			if(PB>PA){
				PA+=(PA*CA)/100;
				PB+=(PB*CB)/100;
				cont++;
			}
		}
		if(cont>100){
		printf("Mais de 1 seculo.\n");
		}
		else{
		printf("%d anos.\n", cont);
		}
	}
	return 0;
}