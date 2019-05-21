#include <stdio.h>
#include <math.h>

#define colunas 6

void LerMatriz(int qtd_testes, int qtd_amostras, double mat[qtd_testes][colunas], double resp[qtd_testes], double amostra[qtd_amostras][colunas]){
	char letra;
	int i, j;
	for(i=0; i<qtd_testes; i++){
		for(j=0; j<colunas; j++){
			if(j==1){
				scanf(" %c", &letra);
				if(letra=='f'){
					mat[i][j]=1;
				}
				else if(letra=='m'){
					mat[i][j]=0;			
				}
			}
			else if(j==5){
				scanf(" %c", &letra);
				if(letra=='S'){
					mat[i][j]=0;
				}
				else if(letra=='C'){
					mat[i][j]=1;
				}
				else if(letra=='Q'){
					mat[i][j]=2;
				}
			}
			else
				scanf("%lf", &mat[i][j]);
		}
	}
	for(i=0; i<qtd_testes; i++){
		scanf("%lf", &resp[i]);
	}
	for(i=0; i<qtd_amostras; i++){
		for(j=0; j<colunas; j++){
			if(j==1){
				scanf(" %c", &letra);
				if(letra=='f'){
					amostra[i][j]=1;
				}
				else if(letra=='m'){
					amostra[i][j]=0;			
				}
			}
			else if(j==5){
				scanf(" %c", &letra);
				if(letra=='S'){
					amostra[i][j]=0;
				}
				else if(letra=='C'){
					amostra[i][j]=1;
				}
				else if(letra=='Q'){
					amostra[i][j]=2;
				}
			}
			else
				scanf("%lf", &amostra[i][j]);
		}
	}
}

void MediaDesvio(int qtd_testes, double mat[qtd_testes][colunas], double media[colunas], double desvio[colunas]){
	int i, j;
	/*Calcular a media*/
	for(i=0; i<6; i++){
		media[i]=0;
	}
	for(i=0; i<qtd_testes; i++){
		for(j=0; j<colunas; j++){
			if(j==0){
				media[0]+=mat[i][j];
			}
			if(j==1){
				media[1]+=mat[i][j];
			}
			if(j==2){
				media[2]+=mat[i][j];
			}
			if(j==3){
				media[3]+=mat[i][j];
			}
			if(j==4){
				media[4]+=mat[i][j];
			}
			if(j==5){
				media[5]+=mat[i][j];
			}
		}
	}
	for(i=0; i<6; i++){
		media[i]=media[i]/qtd_testes;
	}
	/*Fim*/

	/*Calcular desvio padrao*/

	

}

int main(){
	int i, j, k, qtd_testes, qtd_amostras; /*K-Vizinhos, Linhas, Experimentos para resposta*/
	scanf("%d", &k);
	scanf("%d", &qtd_testes);
	scanf("%d", &qtd_amostras);

	double mat[qtd_testes][colunas], resp[qtd_testes], amostra[qtd_amostras][colunas], media[colunas], desvio[colunas];
	LerMatriz(qtd_testes, qtd_amostras, mat, resp, amostra);
	MediaDesvio(qtd_testes, mat, media, desvio);
	printf("\n");
	for(i=0; i<qtd_testes; i++){
		for(j=0; j<colunas; j++){
			printf("%.0lf ", mat[i][j]);
		}
		printf("\n");

	}
	return 0;
}	