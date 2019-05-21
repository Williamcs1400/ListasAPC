#include <stdio.h>
#include <math.h>

int main(){
	double num, expo;
	scanf("%lf %lf", &num, &expo);
	printf("%.1lf", pow(num, expo));
	return 0;
}