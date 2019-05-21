#include <stdio.h>

int main(){
	double compra, venda, i, dife=0, lucro=0;
	int cont_lucro=0, cont_preju=0;
	for(i=0; i<6; i++){
		scanf("%lf %lf", &compra, &venda);
		dife=venda-compra;
		lucro+=dife/50000;
		if(venda<compra){
			cont_preju++;
		}
		if(venda>compra){
			cont_lucro++;
		}
	}
	printf("%.2lf %d %d\n", lucro*100, cont_lucro, cont_preju);
	return 0;
}