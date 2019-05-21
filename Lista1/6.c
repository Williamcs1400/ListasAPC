#include <stdio.h>

int main(){
	double invest, juros, imposto, rend=0, pagar=0;
	scanf("%lf %lf %lf", &invest, &juros, &imposto);
	rend=((invest*juros)/100);
	pagar=((rend*imposto)/100);
	printf("%.2lf %.2lf\n", pagar, (invest+rend)-pagar);
	return 0;
}