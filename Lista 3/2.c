#include <stdio.h>

int main(){
	int horas[30], total=0, i;
	for(i=0; i<30; i++){
		scanf("%d", &horas[i]);
	} 
	for(i=0; i<30; i++){
		total+=horas[i];
	}
	printf("%d\n", total);
	return 0;
}