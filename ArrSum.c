#include<stdio.h>
int main(){
    long long int n, sum=-50;
    scanf("%lld",&n);

    for(int i =0; i<n; i++){
        sum = sum+ i;

    }

        
        if(sum <0){
            sum =sum * -1;
        }

        printf("\n%lld",sum);

    return 0;
}