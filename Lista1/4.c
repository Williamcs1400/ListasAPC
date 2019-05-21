#include <stdio.h>

int main(){
	double sal, aumento;
	scanf("%lf %lf", &sal, &aumento);
	printf("%.2lf %.2lf\n", ((sal*aumento)/100), ((sal*aumento)/100)+sal);
	return 0;
}