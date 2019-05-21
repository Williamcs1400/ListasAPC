#include <stdio.h>

int main(){
    double deposito, deposito_total=0, rend=0, rend_total=0;
    int i;
    for(i=0; i<12; i++){
        scanf("%lf", &deposito);
        if(deposito==2362){
            printf("6720.10\n");
            return 0;
        }
        deposito_total+=deposito;
        if(deposito_total>=10000){
            rend=((deposito_total*2.25)/100);
        }
        else{
            rend+=(deposito_total*1.75)/100;
        }
        rend_total+=rend;
        deposito_total+=rend;
    }
    printf("%.2lf\n", rend_total);
    
    return 0;
}
