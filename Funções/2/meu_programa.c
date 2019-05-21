#include <stdio.h>
#include "minha_biblioteca.h"

int main(){
	int anos;
	scanf("%d", &anos);
	anos_para_dias(anos);
	printf("%d\n", anos_para_dias(anos));
	return 0;
}