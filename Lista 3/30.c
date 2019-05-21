#include <stdio.h>
#include <math.h>

int main(){
    int invalido=0, j, i, base, result=0, aux;
    char num[10];
    scanf("%[^ ] %d", num, &base);
    for(j=0; num[j]!='\0'; j++){
    }
    for(i=0; i<j; i++){
        aux=num[i]-'0';
        if(aux>=base){
            printf("ERROR\n");
            invalido=1;
            break;
        }
    }
    if(invalido==0){
        for(i=0; i<j; i++){
            result+=(num[i]-'0')*pow(base, j-i-1);
        }
        printf("%d\n", result);
    }
    return 0;
}
