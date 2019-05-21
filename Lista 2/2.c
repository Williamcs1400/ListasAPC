#include <stdio.h>

int main(){
    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);
    if((num_1%num_2)==0){
        printf("MULTIPLO\n");
    }
    else 
        printf("NAO E MULTIPLO\n");
    
    return 0;
}