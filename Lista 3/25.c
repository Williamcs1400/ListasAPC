#include <stdio.h>

int Ehprimo(long int num){
    int i;
    for(i=2; i<num; i++){
        if(num%i==0){
            return 1;
        }
    }
    return 0;
}

int fibonacci(long int num){
    long int anterior=0, post=1, i, resp=0;
    for(i=0; i<100; i++){
        if(i>0){
            anterior=post;
            post=resp;
        }
        resp=anterior+post;
        if(resp==num){
            return 1;
        }
    }
    return 0;
}

int main(){
    long int num;
    int  result_primo=0, result_fibo=0;
    scanf("%ld", &num);
    result_primo=Ehprimo(num);
    result_fibo=fibonacci(num);
    if((result_primo!=1)&&(result_fibo==1)){
        printf("SIM\n");
    }
    else 
        printf("NAO\n");
    return 0;
}
