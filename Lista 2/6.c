#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    if(idade<16){
        printf("NAO ELEITOR\n");
        return 0;
    }
    if(idade>65){
        printf("FACULTATIVO\n");
    }
    else
        printf("OBRIGATORIO\n");
    
    return 0;
}