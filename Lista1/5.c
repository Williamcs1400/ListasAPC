#include <stdio.h>

int main(){
	double sal;
	scanf("%lf", &sal);
	printf("%.2lf", sal-((sal*2)/100));
	return 0;
}