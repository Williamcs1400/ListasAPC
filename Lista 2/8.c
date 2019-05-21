#include <stdio.h>

int main(){
	double SM;
	scanf("%lf", &SM);
	if(SM>3000){
		printf("%.2lf\n", (SM*50)/100);
	}
	else if(SM>1000){
		printf("%.2lf\n", (SM*40)/100);
	}
	else if(SM>500){
		printf("%.2lf\n", (SM*30)/100);
	}
	else 
		printf("0.00\n");

	return 0;
}