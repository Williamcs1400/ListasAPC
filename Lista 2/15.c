#include <stdio.h>
#include <math.h>

int main(){
	char opera;
	double a, b, c, bhaskara1=0, bhaskara2=0 ,delta=0;
	scanf("%c", &opera);

	/*Operações básicas*/
	if(opera=='+'){
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a+b);
	}
	else if(opera=='-'){
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a-b);
	}
	else if(opera=='*'){
		scanf("%lf %lf", &a, &b);
		printf("%.3lf\n", a*b);
	}
	else if(opera=='/'){
		scanf("%lf %lf", &a, &b);
		if(b==0){
			printf("ERROR!\n");
		}
		else
			printf("%.3lf\n", a/b);
	}

	/*Módulo, raiz e potência*/

	else if(opera=='%'){
		scanf("%lf %lf", &a, &b);
		int d=0, e=0;
		d=a;
		e=b;
		if((d!=a)||(e!=b)){
			printf("ERROR!\n");
		}
		else if(e==0){
			printf("ERROR!\n");
		}
		else 
		printf("%d.000\n", d%e);	
	}
	else if(opera=='r'){
		scanf("%lf", &a);
		if(a<0){
			printf("ERROR!\n");
		}
		else printf("%.3lf\n", sqrt(a));
	}
	else if(opera=='p'){
		scanf("%lf", &a);
		if(a<0){
			scanf("%lf", &b);
			int f=0;
			f=b;
			if(f!=b){
				printf("ERROR!\n");
			}
			else
				printf("%.3lf\n", pow(a, b));
		}
		else{
			scanf("%lf", &b);
			printf("%.3lf\n", pow(a, b));	
		}
	}

	/*Bhaskara*/
	else if(opera=='b'){
		scanf("%lf %lf %lf", &a, &b, &c);
		delta=(b*b)-4*a*c;
		if(delta<0){
			printf("ERROR!\n");
		}
		else if((2*a)==0){
			printf("ERROR!\n");
		}
		else{
			bhaskara1=(-b+sqrt(delta))/(2*a);
			bhaskara2=(-b-sqrt(delta))/(2*a);
			printf("%.3lf %.3lf\n", bhaskara1, bhaskara2);
		}
	}
	return 0;

}