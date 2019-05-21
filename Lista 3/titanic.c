#include <stdio.h>

void printa_num(int tam, float *classe, char *sexo, float *idade, float *numero_parceiro, float *numero_pais, char *porto){
	int i;
	for(i=0; i<tam; i++){
		printf("%.1f ", classe[i]);
		if(sexo[i]=='f'){
			printf("1.0 ");
		}
		else
		printf("0.0 ");
		printf("%.1f ", idade[i]);
		printf("%.1f ", numero_parceiro[i]);
		printf("%.1f ", numero_pais[i]);
		if(porto[i]=='S'){
			printf("0.0\n");
		}
		else if(porto[i]=='C'){
			printf("1.0\n");
		}
		else if(porto[i]=='Q'){
			printf("2.0\n");

		}
	}
}

void vive_morre(int tam, float *classe, char *sexo, float *idade, float *numero_parceiro, float *numero_pais, char *porto){
	int i, num_sexo[tam];
	
	for(i=0; i<tam; i++){
		if(sexo[i]=='m'){
			num_sexo[i]=0;
		}
		else
			num_sexo[i]=1;
	}

	for(i=0; i<tam; i++){
		if((idade[i]>15 && idade[i]<=45)||(classe[i]>1 && num_sexo[i]==1)){
			printf("Morreu\n");
		}
		else
			printf("Sobreviveu\n");
	}
}

void media(int tam, float *classe, char *sexo, float *idade, float *numero_parceiro, float *numero_pais, char *porto){
	int i, num_sexo[tam], num_porto[tam];
	float media_classe=0, media_sexo=0, media_idade=0, media_parceiro=0, media_pais=0, media_porto=0;
	
	for(i=0; i<tam; i++){
		if(sexo[i]=='m'){
			num_sexo[i]=0;
		}
		else
			num_sexo[i]=1;
	}

	for(i=0; i<tam; i++){
		if(porto[i]=='S'){
			num_porto[i]=0;
		}
		else if(porto[i]=='C'){
			num_porto[i]=1;
		}
		else
			num_porto[i]=2;
	}

	for(i=0; i<tam; i++){
		media_classe+=classe[i];
		media_sexo+=num_sexo[i];
		media_idade+=idade[i];
		media_parceiro+=numero_parceiro[i];
		media_pais+=numero_pais[i];
		media_porto+=num_porto[i];
	}
	printf("%.3f %.3f %.3f %.3f %.3f %.3f\n", media_classe/tam, media_sexo/tam, media_idade/tam, media_parceiro/tam, media_pais/tam, media_porto/tam);
}

int main(){
	int opera, tam, i;
	scanf("%d %d", &opera, &tam);
	float classe[tam], idade[tam], numero_parceiro[tam], numero_pais[tam];
	char sexo[tam], porto[tam];
	for(i=0; i<tam; i++){
		scanf("%f %c %f %f %f %c", &classe[i], &sexo[i], &idade[i], &numero_parceiro[i], &numero_pais[i], &porto[i]);
	}
	if(opera==0){
		printa_num(tam, classe, sexo, idade, numero_parceiro, numero_pais, porto);
	}
	else if(opera==1){
		vive_morre(tam, classe, sexo, idade, numero_parceiro, numero_pais, porto);
	}
	else if(opera==2){
		media(tam, classe, sexo, idade, numero_parceiro, numero_pais, porto);
	}
	return 0;
}