#include <stdio.h>

int main(){
	int i, total=0;
	char num[11];
	scanf("%s", num);
	while(num[total]!='\0'){
		total++;
	}
	if(num[0]!='-'){
		for(i=total-1; i!=-1; i--){
			printf("%c", num[i]);
		}
	}
	else{
		printf("-");
		for(i=total-1; i!=0; i--){
			printf("%c", num[i]);
		} 
	}
	return 0;
}