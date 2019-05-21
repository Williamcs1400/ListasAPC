#include <stdio.h>

int main(){
	 int idade, nota, qtd=0;
	 float ruim=0, regular=0, pessimo=0, bom=0, media=0, otimo=0;
	 while(1){
	 	scanf("%d", &idade);
		 	if(idade<0){
		 		break;
		 	}
		 	media+=idade;
	 	do{
		 	scanf("%d", &nota);
		}while((nota<1)||(nota>5));

	 	if(nota==5){
	 		pessimo++;
	 	}
	 	if(nota==4){
	 		ruim++;
	 	}
	 	if(nota==3){
	 		regular++;
	 	}
	 	if(nota==2){ 
	 		bom++;
	 	}
	 	if(nota==1){
	 		otimo++;
	 	}
	 	qtd++;
	 }

	 printf("qtde de participantes: %d\n", qtd);
	 printf("idade media dos participantes: %.1f\n", media/qtd);
	 printf("Otimo: %.1f%\n", 100/(qtd/otimo));
	 printf("Bom: %.1f%\n", 100/(qtd/bom));
	 printf("Regular: %.1f%\n", 100/(qtd/regular));
	 printf("Ruim: %.1f%\n", 100/(qtd/ruim));
	 printf("Pessimo: %.1f%\n", 100/(qtd/pessimo));

	 return 0;
}