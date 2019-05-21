#include <stdio.h>

int main(){
    int n1, n2, media=0;
    scanf("%d %d", &n1, &n2);
    media=(n1+n2)/2;
    if(media<3){
        printf("REPROVADO\n");
    }
    else if(media>=7){
        printf("APROVADO\n");
    }
    else 
        printf("EXAME\n");
    return 0;
}