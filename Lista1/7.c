#include <stdio.h>
#define pi 3.1416

int main(){
	double altura, raio;
	scanf("%lf %lf", &altura, &raio);
	printf("%.1lf\n", pi*(raio*raio)*altura);
	return 0;
}