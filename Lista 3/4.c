#include  <stdio.h>

int main(){
	int i, num, total=1;
	scanf("%d", &num);
	if(num==0){
		printf("1\n");
	}
	else if(num<0){
		printf("nao existe\n");
	}
	else{
		for(i=1; i<=num; i++){
			total*=i;
		}
		printf("%d\n", total);
	}
	return 0;
}