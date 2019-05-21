#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    if(idade<5){
        printf("SEM CATEGORIA\n");
    }
    else if(idade<7){
        printf("INFANTIL A\n");
    }
    else if(idade<10){
        printf("INFANTIL B\n");
    }
    else if(idade<13){
        printf("JUVENIL A\n");
    }
    else if(idade<17){
        printf("JUVENIL B\n");
    }
    else 
        printf("SENIOR\n");
        
    return 0;
}