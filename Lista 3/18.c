#include <stdio.h>

int main(){
	int DN, MN, AN, DH, MH, AH;
	do{
		scanf("%d", &DN);
	}while((DN<=0)||(DN>30));
	
	do{
		scanf("%d", &MN);
	}while((MN<=0)||(MN>12));

	do{
		scanf("%d", &AN);	
	}while((AN<=0)||(AN>2020));

	do{
		scanf("%d", &DH);
	}while((DH<=0)||(DH>30));

	do{
		scanf("%d", &MH);
	}while((MH<=0)||(MH>12));

	do{
		scanf("%d", &AH);
	}while((AH<=0)||(AH>2020)||(AH<=AN));

	unsigned int total=((DN-DH)+((MN*30)-(MH*30))-((AH-AN)*360));
	printf("%d\n", -total);

	return 0;
}