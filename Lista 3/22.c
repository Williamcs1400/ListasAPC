#include <stdio.h>

int main(){
	int codigo, i, codigo_maior=0, codigo_menor=0;
	double venda, maior_valor=-10000, menor_valor=10000;
	for(i=0; i<10; i++){
		scanf("%d %lf", &codigo, &venda);
		if(venda<=5000){
			if(((venda*1.5)/100)>maior_valor){
				codigo_maior=codigo;
				maior_valor=(venda*1.5)/100;
			}
			if(((venda*1.5)/100)<menor_valor){
				codigo_menor=codigo;
				menor_valor=(venda*1.5)/100;
			}
		}
		else if(venda<15000){
			if(((venda*3.5)/100)>maior_valor){
				codigo_maior=codigo;
				maior_valor=(venda*3.5)/100;
			}
			if(((venda*3.5)/100)<menor_valor){
				codigo_menor=codigo;
				menor_valor=(venda*3.5)/100;
			}
		}
		else{
			if(((venda*4.7)/100)>maior_valor){
				codigo_maior=codigo;
				maior_valor=(venda*4.7)/100;
			}
			if(((venda*4.7)/100)<menor_valor){
				codigo_menor=codigo;
				menor_valor=(venda*4.7)/100;
			}
		}
	}	
	printf("%d %.2lf %d %.2lf\n", codigo_maior, maior_valor, codigo_menor, menor_valor);
	return 0;
}