#include <stdio.h>

int main(){
	double x;
	scanf("%lf", &x);
	if(x<=1){
		printf("1\n");
	}
	else if(x<=2){
		printf("2\n");
	}
	else if(x<=3){
		printf("%1lf", x*x);
	}
	else 
		printf("%.1lf", (x*x)*x);
	return 0;
}