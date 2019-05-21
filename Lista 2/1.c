#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num%2==0){
        printf("PAR\n");
    }
    else
        printf("IMPAR\n");
    return 0;
}