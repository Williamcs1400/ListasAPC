#include <stdio.h>
#include <math.h>

int bhaskara(int a, int b, int c, float* x1, float* x2){
	int delta=0;
	delta=((b*b)-(4*a*c));
	delta=sqrt(delta);
	if(delta>0){
		*x1=(-b+delta)/(2*a);
		*x2=(-b-delta)/(2*a);
		return 2;
	}
	if(delta==0){
		*x1=(-b+delta)/(2*a);
		return 1;
	}
	else
		return 0;

}

int main(){
	int a, b, c, result=0;
	float x1=0, x2=0;
	scanf("%d %d %d", &a, &b, &c);
	result=bhaskara(a, b, c, &x1, &x2);
	if(result==2){
		printf("Existem duas raizes da equação, x1: %.2f x2: %.2f\n", x1, x2);
	}
	else if(result==1){
		printf("Existe uma raiz da equação: %.2f\n", x1);
	}
	else 
		printf("Não existem raizes reais da equação\n");

	return 0;
}