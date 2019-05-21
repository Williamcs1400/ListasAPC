#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int sinal(int x){ 
	int result=0;
	if(x==0){
		result=0;
	}
	else if(x>0){
		result=1;
	}
	else
		result=-1;

	return result;
}