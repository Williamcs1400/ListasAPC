#include <stdio.h>

int main(){
	double salario;
	scanf("%lf", &salario);
	printf("%.2lf\n", ((salario*25)/100)+salario);
	return 0;
}