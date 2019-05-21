#include <stdio.h>
#include <math.h>

int main(){
	double num;
	scanf("%lf", &num);
	printf("%.1lf %.1lf %.1lf %.1lf\n", (num*num), (num*num)*num, sqrt(num), cbrt(num));
	return 0;
}