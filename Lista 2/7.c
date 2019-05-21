#include <stdio.h>

int main(){
    float peso, altura, imc=0;
    scanf("%f %f", &peso, &altura);
    imc=peso/(altura*altura);
    if(imc>=40){
        printf("MORBIDO\n");
    }
    else if(imc>=30){
        printf("OBESO\n");
    }
    else if(imc>=25){
        printf("SOBREPESO\n");
    }
    else if(imc>=20){
        printf("NORMAL\n");
    }
    else
        printf("ABAIXO\n");
    
    return 0;
}