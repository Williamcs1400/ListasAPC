#include <stdio.h>

int main(){
	double a, b, total=0;
	scanf("%lf %lf", &a, &b);
	if(a==1){
		total+=5;
	}
	if(a==2){
		total+=7;
	}
	if(a==3){
		total+=7.50;
	}
	if(a==4){
		total+=3.50;
	}
	if(a==5){
		total+=3;
	}
	if(b==1){
		total+=5;
	}
	if(b==2){
		total+=7;
	}
	if(b==3){
		total+=7.50;
	}
	if(b==4){
		total+=3.50;
	}
	if(b==5){
		total+=3;
	}
	printf("Total: R$ %.2lf\n", total);
	return 0;
}