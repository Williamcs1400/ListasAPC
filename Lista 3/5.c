#include <stdio.h>

int main(){
	int i, tempo;
	double 	deposito, juros, rend;
	scanf("%lf %lf %d", &deposito, &juros, &tempo);
	for(i=0; i<tempo; i++){
		rend=(deposito*juros)/100;
		printf("Rendimento no mes %d: %.2lf\n", i, rend);
		deposito+=rend;
	}
	printf("Saldo final do investimento: %.2lf\n", deposito);
	return 0;
}