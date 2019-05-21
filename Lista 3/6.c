#include <stdio.h>

int main(){
	int num, i=0;
	double total;
	while(num>=0){
		scanf("%d", &num);
		if(num<0){
			printf("%.0lf\n", total);
			printf("%.1lf\n", total/i);
		}
		total+=num;
		i++;
	}
	
	return 0;
}