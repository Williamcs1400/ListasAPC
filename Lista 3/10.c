#include <stdio.h>

int main(){
	int sal, dif=0, total=0;
	while(1){
		scanf("%d", &sal);
		dif+=sal;
		if(sal==0){
			break;
		}
		else if(sal>1000){
			total+=sal+50;
		}
		else if(sal>=500){
			total+=sal+75;
		}
		else 
			total+=sal+100;
	}
	printf("%d\n", total);
	printf("%d\n", total-dif);
	return 0;
}