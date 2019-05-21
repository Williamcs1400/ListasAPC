#include <stdio.h>

int main(){
	int alt2, alt1, i;
	scanf("%d %d", &alt1, &alt2);
	for(i=1; i<1000; i++){
		alt1+=2;
		alt2+=3;
		if(alt2>=alt1){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}